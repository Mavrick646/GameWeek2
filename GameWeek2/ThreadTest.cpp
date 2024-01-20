#include <iostream>
#include <chrono>
#include "ThreadTest.h"

void ThreadTest::TestStaticFunctionPointer()
{
	m_thread = std::thread(StaticThreadFunction);
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Display From MainThread" << std::endl;
		std::this_thread::sleep_for(std::chrono:: milliseconds(200));
	}
	m_thread.join();//locks thread untilfnuction exits
}
void ThreadTest::StaticThreadFunction()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << "thread static function pointer working" << std::endl;
		std::this_thread::sleep_for(std::chrono:: milliseconds(200));
	}
}

void ThreadTest::TestInstanceFunctionPointer()
{
	m_thread = std::thread(&ThreadTest::InstanceThreadFunction, ThreadTest());
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Display from MainThread" << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(200));
	}
	m_thread.join();
}

void ThreadTest::InstanceThreadFunction()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << "thread static function pointer working" << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(200));
	}
}

void ThreadTest::TestFunctionObject()
{
	m_thread = std::thread(ThreadTest());
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Display from MainThread" << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(200));
	}
	m_thread.join();
}

void ThreadTest::operator()()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << "thread static function pointer working" << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(200));
	}
}

void ThreadTest::TestLambdaFunction()
{
	m_thread = std::thread([]
		{
			for (int i = 0; i < 5; i++)
			{
				std::cout << "Thread lambda function executing" << std::endl;
				std::this_thread::sleep_for(std::chrono::milliseconds(200));
			}
		});
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Display from MainThread" << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(200));
	}
	m_thread.join();
}
