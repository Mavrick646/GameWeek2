#ifndef RESOURCE_H
#pragma once
class Resource
{
public:
	//constructor
	Resource() { m_value = 0; }
	//Accessors
	int GetValue() { return m_value; }
	void SetValue(int _number) { m_value = _number; }
	//methods
	void Reset() { m_value = 0; }
private:
	//Members
	int m_value;
};
#endif RESOURCE_H
