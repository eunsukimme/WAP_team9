#pragma once
#include "GameScene.h"
class EntryScene:public GameScene
{
public:
	 void Init();
	 void Update();
	 void Draw();
	 void Destroy();


public:
	EntryScene();
	virtual ~EntryScene();
};

