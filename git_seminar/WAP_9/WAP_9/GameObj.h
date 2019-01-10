#pragma once
#include "Include.h"
class GameObj
{
public:
	virtual void Init() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;
	virtual void Destroy() = 0;
public:
	GameObj();
	virtual ~GameObj();
};

