#include "NoCommandDemo.h"
#include "NoCommandDemo.h"
#include <iostream>
using namespace std;

void NoCommandDemo::Jump()
{
	cout << "jump!\n";
}

void NoCommandDemo::FireGun()
{
	cout << "fire!\n";
}

void NoCommandDemo::SwapWeapon()
{
	cout << "swap!\n";
}

void NoCommandDemo::Lurch()
{
	cout << "lurch!\n";
}

void NoCommandDemo::HandleInput(std::string _button)
{
	if (_button == "X") Jump();
	if (_button == "Y") FireGun();
	if (_button == "A") SwapWeapon();
	if (_button == "B") Lurch();
}
