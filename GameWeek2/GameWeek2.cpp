// GameWeek2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "NoCommandDemo.h"
#include "CommandDemo.h"
#include "Unit.h"
#include "Physics.h"
#include "Achievements.h"
#include "Robots.h"

int main()
{
	Unit* unit = new Unit();

	float count = 0.0f;
	while (count < 10)
	{
		unit->Update();
		unit->MoveTo((int)count, 10);
		std::cout << unit->GetCachedData().str() << "\n";
		count += 0.333f;
	};
	delete unit;
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
