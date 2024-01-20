#include "Unit.h"
#include<iostream>

void Unit::MoveTo(int _x, int _y)
{
	m_dirty = ((m_x != _x) || (m_y != _y));
	m_lastX = m_x;
	m_lastY = m_y;
	m_x = _x;
	m_y = _y;
	// std::cout << "Move to: x: " << m_x << " y: " << m_y << "\n";
};

void Unit::Update()
{
	if (m_dirty)
	{
		m_dirty = false;
		std::cout << "Perform time consusming task eveytime you move \n";
		m_cachedData.str("");
		m_cachedData << "New Position is x: " << m_x << " y: " << m_y;

	}
}