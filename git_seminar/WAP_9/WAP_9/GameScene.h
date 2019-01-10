#pragma once
class GameScene
{
public:
	virtual void Init() =0;
	virtual void Update() =0;
	virtual void Draw() =0;
	virtual void Destroy()=0;
public:
	GameScene();
	virtual ~GameScene();
};

