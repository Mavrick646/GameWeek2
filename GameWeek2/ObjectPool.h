#ifndef OBJECTPOOL_H
#pragma once
#include <iostream>
#include <vector>

template <class T>
class ObjectPool
{
public:
	//Constructor and Destructor 
	ObjectPool() { }
	~ObjectPool()
	{
		for (unsigned int count = 0; count < m_all.size(); count++)
		{
			delete m_all[count];
		}
		m_all.clear();
		m_available.clear();
	}
	//Methods
	T* GetResource()
	{
		if (m_available.empty())
		{
			std::cout << "Creating new." << std::endl;
			T* resource = new T();
			m_all.push_back(resource);
			return resource;
		}
		else
		{
			std::cout << "Reusing existing." << std::endl;
			T* resource = m_available[0];
			m_available.erase(m_available.begin());
			return resource;
		}
	}

	void ReleaseResource(T* _object)
	{
		_object->Reset();
		m_available.push_back(_object);
		
	}

private:
	//Members
	std::vector<T*> m_available;
	std::vector<T*> m_all;

};
#endif OBJECTPOOL_H
