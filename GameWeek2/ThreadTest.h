#pragma once
#include <thread>

class ThreadTest
{
public:
	//Methods
	void TestStaticFunctionPointer();
	void TestInstanceFunctionPointer();
	void TestFunctionObject();
	void TestLambdaFunction();
	void operator()();

private:
	//methods
	static void StaticThreadFunction();
	void InstanceThreadFunction();
	//Members
	std::thread m_thread;
};

