// GameWeek2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "NoCommandDemo.h"
#include "CommandDemo.h"
#include "Unit.h"
#include "Physics.h"
#include "Achievements.h"

int main()
{
	Achievements* achievements = new Achievements();
	//Physics* physics = new Physics();
	Unit* unit = new Unit();

	Physics::Instance().GetEventFalling()->AddObserver(achievements);
	unit->MoveTo(0, 1);
	unit->MoveTo(0, 0);
	unit->MoveTo(0, -1);
	Physics::Instance().Update(unit);

	delete unit;
	delete achievements;
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
