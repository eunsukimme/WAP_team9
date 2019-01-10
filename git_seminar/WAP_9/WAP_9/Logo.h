#pragma once
#include "GameScene.h"
class Logo :public GameScene
{
public:
	void Init();
	void Update();
	void Draw();
	void Destroy();
public:
	Logo();
	~Logo();
};

