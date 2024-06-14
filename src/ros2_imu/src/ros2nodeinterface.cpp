
//
// File ros2nodeinterface.cpp
//
// Code generated for Simulink model 'ros2_imu'.
//
// Model version                  : 1.13
// Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
// C/C++ source code generated on : Fri Jun 14 05:25:54 2024
//
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4244)
#pragma warning(disable : 4265)
#pragma warning(disable : 4458)
#pragma warning(disable : 4100)
#pragma comment(lib, "Ws2_32.lib")
#else
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wredundant-decls"
#pragma GCC diagnostic ignored "-Wnon-virtual-dtor"
#pragma GCC diagnostic ignored "-Wdelete-non-virtual-dtor"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wshadow"
#endif //_MSC_VER
#include "rclcpp/rclcpp.hpp"
#include "ros2_imu.h"
#include "ros2nodeinterface.h"
#include <thread>
#include <chrono>
#include <utility>
const std::string SLROSNodeName("ros2_imu");
extern rclcpp::Node::SharedPtr SLROSNodePtr;
#ifndef RT_MEMORY_ALLOCATION_ERROR_DEF
#define RT_MEMORY_ALLOCATION_ERROR_DEF
const char *RT_MEMORY_ALLOCATION_ERROR = "memory allocation error";
#endif
namespace ros2 {
namespace matlab {
NodeInterface::NodeInterface()
    : mExec()
    , mBaseRateSem()
    , mBaseRateThread()
    , mSchedulerTimer()
    , mExtModeThread()
    , mStopSem()
    , mRunModel(true){
  }
NodeInterface::~NodeInterface() {
    terminate();
  }
void NodeInterface::initialize(int argc, char * const argv[]) {
    try {
        //initialize ros2
        std::vector<char *> args(argv, argv + argc);
        rclcpp::init(static_cast<int>(args.size()), args.data());
        //create the Node specified in Model
        std::string NodeName("ros2_imu");
        SLROSNodePtr = std::make_shared<rclcpp::Node>(NodeName);
        RCLCPP_INFO(SLROSNodePtr->get_logger(),"** Starting the model \"ros2_imu\" **\n");
        mExec = std::make_shared<rclcpp::executors::MultiThreadedExecutor>();
        mExec->add_node(SLROSNodePtr);
		{
			char* extmodeArg[] = {"-port","17725","-blocking","1","-verbose","0"};
			rtExtModeParseArgs(6, (const char_T **)extmodeArg, NULL);
		}
        //initialize the model which will initialize the publishers and subscribers
		rtmSetErrorStatus(ros2_imu_M, (NULL));
        ros2_imu_initialize();
		/* External mode */
		rtSetTFinalForExtMode(&rtmGetTFinal(ros2_imu_M));
		rtExtModeCheckInit(1);
		{
			boolean_T rtmStopReq = false;
			rtExtModeWaitForStartPkt(ros2_imu_M->extModeInfo, 1,
				&rtmStopReq);
			if (rtmStopReq) {
				rtmSetStopRequested(ros2_imu_M, true);
			}
		}
		rtERTExtModeStartMsg();
		mExtModeThread = std::make_shared<std::thread>(&NodeInterface::extmodeBackgroundTask, this);
        //create the threads for the rates in the Model
        mBaseRateThread = std::make_shared<std::thread>(&NodeInterface::baseRateTask, this);
		mSchedulerTimer = SLROSNodePtr->create_wall_timer(std::chrono::nanoseconds(10000000),std::bind(&NodeInterface::schedulerThreadCallback,this));
    }
    catch (std::exception& ex) {
        std::cout << ex.what() << std::endl;
        throw ex;
    }
    catch (...) {
        std::cout << "Unknown exception" << std::endl;
        throw;
    }
}
int NodeInterface::run() {
  if (mExec) {
    mExec->spin();
  }
  mRunModel = false;
  return 0;
}
boolean_T NodeInterface::getStopRequestedFlag(void) {
    #ifndef rtmGetStopRequested
    return (!(rtmGetErrorStatus(ros2_imu_M) 
        == (NULL)));
    #else
    return (!(rtmGetErrorStatus(ros2_imu_M) 
        == (NULL)) || rtmGetStopRequested(ros2_imu_M));
    #endif
}
void NodeInterface::stop(void) {
  if (mExec.get()) {
    mExec->cancel();
    if (SLROSNodePtr) {
      mExec->remove_node(SLROSNodePtr);
    }
    while (mExec.use_count() > 1);
  }
}
void NodeInterface::terminate(void) {
    if (mBaseRateThread.get()) {
        mRunModel = false;
        mBaseRateSem.notify();
        mBaseRateThread->join();
		if (mSchedulerTimer.get()) {
        	mSchedulerTimer->cancel();
        	mSchedulerTimer->reset();
		}
        mBaseRateThread.reset();
        ros2_imu_terminate();
        rtExtModeShutdown(1);
        mExec.reset();
        SLROSNodePtr.reset();
        rclcpp::shutdown();
    }
}
//
// Scheduler Task using clock timer to run base-rate
//
void NodeInterface::schedulerThreadCallback(void)
{
	if(mRunModel) {
        mBaseRateSem.notify();
    }
}
//
//Model specific
// Base-rate task
void NodeInterface::baseRateTask(void) {
  mRunModel = (rtmGetErrorStatus(ros2_imu_M) ==
              (NULL));
  while (mRunModel) {
    mBaseRateSem.wait();
#ifdef MW_DEBUG_LOG
    RCLCPP_INFO(SLROSNodePtr->get_logger(),"** Base rate task semaphore received\n");
#endif
    if (!mRunModel) break;
	/* External mode */
    {
      boolean_T rtmStopReq = false;
      rtExtModePauseIfNeeded(ros2_imu_M->extModeInfo, 1,
        &rtmStopReq);
      if (rtmStopReq) {
        rtmSetStopRequested(ros2_imu_M, true);
      }
      if (rtmGetStopRequested(ros2_imu_M) == true) {
        rtmSetErrorStatus(ros2_imu_M, "Simulation finished");
		mRunModel = false;
        break;
      }
    }
    ros2_imu_step(
	);
    rtExtModeCheckEndTrigger();
    mRunModel = !NodeInterface::getStopRequestedFlag();
  }
  NodeInterface::stop();
}
void NodeInterface::extmodeBackgroundTask(void)
{
  while (mRunModel) {
    /* External mode */
    {
      boolean_T rtmStopReq = false;
      rtExtModeOneStep(ros2_imu_M->extModeInfo, 1,
                       &rtmStopReq);
      if (rtmStopReq) {
        rtmSetStopRequested(ros2_imu_M, true);
      }
    }
  }
}
}//namespace matlab
}//namespace ros2
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
