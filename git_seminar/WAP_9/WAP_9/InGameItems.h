#pragma once
#include "GameItems.h"
class InGameItems:public GameItems
{
public:
	void Init();
	void Update();
	void Draw();
	void Destroy();
public:
	InGameItems();
	~InGameItems();
};

