#pragma once
#include <string>
#include <vector>
#include "Command.h"

class Unit;
class Command;
class CommandDemo
{
public:
	CommandDemo();
	~CommandDemo();
	void HandleInput(std::string _button);
	void Undo();

private:
	Command* m_commandJump;
	Command* m_commandFireGun;
	Command* m_commandSwapWeapon;
	Command* m_commandLurch;
	std::vector<Command*> m_commands;
	Unit* m_unit;
};

