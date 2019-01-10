#pragma once
#include "Include.h"
class GameScene;
class SceneMgr
{
private:
	static SceneMgr * m_pInst;
	static GameScene * m_scene;
public:
	static SceneMgr * GetInst()
	{
		if (m_pInst != nullptr)
			m_pInst = new SceneMgr();
		
		return m_pInst;
	}

	void SetScene(SCENE _scene);

public:
	void Update();
	void Draw();
	void Destroy();
public:
	SceneMgr();
	virtual ~SceneMgr();
};

