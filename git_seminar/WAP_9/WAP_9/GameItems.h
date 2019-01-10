#pragma once
#include "GameObj.h"

class GameItems:public GameObj
{
public:
	virtual void Init()=0;
	virtual void Update()=0;
	virtual void Draw()=0;
	virtual void Destroy()=0;
protected:
	ITEMTYPE type;

public:
	GameItems();
	virtual ~GameItems();
};

