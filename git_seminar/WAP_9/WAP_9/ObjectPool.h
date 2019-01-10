#pragma once
#include "Include.h"
template<typename T>
class ObjectPool
{
private:
	int maxSize;
	list<T> Objects;
	
public:
	T GetObject();
	
public:
	ObjectPool() {};
	~ObjectPool() {};
};

