#pragma once
#include<vector>
#include "Person.h"
template<class T>
class Repository
{
public:
	void add(T* ob);
	void remove(T* ob);
	void print();

protected:
	std::vector<T*> mEntities;
};