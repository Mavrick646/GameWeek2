#include "CommandDemo.h"
#include "Command.h"
#include <iostream>

class CommandJump : public Command 
{
public:
	CommandJump(){ }
	virtual void Execute() { std::cout << "Jump!\n"; }
	
};

class CommandFireGun : public Command
{
public:
	CommandFireGun() { }
	virtual void Execute() { std::cout << "Fire!\n"; }

};

class CommandSwapWeapon : public Command
{
public:
	CommandSwapWeapon() { }
	virtual void Execute() { std::cout << "Switching guns!\n"; }

};

class CommandLurch : public Command
{
public:
	CommandLurch() { }
	virtual void Execute() { std::cout << "Lurch!\n"; }

};

CommandDemo::CommandDemo()
{
	m_commandJump = new CommandJump();
	m_commandFireGun = new CommandFireGun();
	m_commandSwapWeapon = new CommandSwapWeapon();
	m_commandLurch = new CommandLurch();

}

CommandDemo::~CommandDemo()
{
	delete m_commandJump;
	delete m_commandFireGun;
	delete m_commandSwapWeapon;
	delete m_commandLurch;
}

void CommandDemo::HandleInput(std::string _button)
{
	if (_button == "X") m_commandJump->Execute();
	if (_button == "Y") m_commandFireGun->Execute();
	if (_button == "A") m_commandSwapWeapon->Execute(); 
	if (_button == "B") m_commandLurch->Execute();
}
