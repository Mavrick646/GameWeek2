// GameWeek2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "NoCommandDemo.h"
#include "CommandDemo.h"
#include "Unit.h"
#include "Physics.h"
#include "Achievements.h"
#include "Robots.h"
#include "ObjectPool.h"
#include "Resource.h"

int main()
{
	ObjectPool<Resource>* pool = new ObjectPool<Resource>();
	// Resources will be created.
	Resource* one = pool->GetResource();
	one->SetValue(10);
	std::cout << "one = " << one->GetValue() << " [" << one << "]" << std::endl;

	Resource* two = pool->GetResource();
	two->SetValue(20);
	std::cout << "two = " << two->GetValue() << " [" << two << "]" << std::endl;

	pool->ReleaseResource(one);
	pool->ReleaseResource(two);

	//Resources will be reused 
	//Note value of both resources was reset

	one = pool->GetResource();
	std::cout << "one = " << one->GetValue() << " [" << one << "]" << std::endl;

	two = pool->GetResource();
	std::cout << "two = " << two->GetValue() << " [" << two << "]" << std::endl;

	delete pool;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
