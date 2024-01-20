#include "Achievements.h"
#include "Unit.h"
#include <iostream>

void Achievements::OnNotify(Unit* _unit, std::string _event)
{
	if ((_event == "UnitFalling") && (_unit->GetY() < 0))
	{
		UnlockAchievement("Died from falling");
	}
}

void Achievements::UnlockAchievement(std::string _achievement)
{
	std::cout << "Achievement unlocked: " << _achievement << "\n";
}