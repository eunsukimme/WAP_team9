#include "stdafx.h"
#include "SceneMgr.h"
#include "Logo.h"
SceneMgr* SceneMgr::m_pInst = nullptr;
GameScene* SceneMgr::m_scene = nullptr;
SceneMgr::SceneMgr()
{
	
}


SceneMgr::~SceneMgr()
{
}

void SceneMgr::SetScene(SCENE _scene)
{
	
	if (m_scene != nullptr)
	{
		m_scene = nullptr;
		delete m_scene;
	}
	
	switch (_scene)
	{
	case SCENE_LOGO:
		m_scene = new Logo();
		m_scene->Init();
		break;
	case SCENE_MENU:
		break;
	case SCENE_OPTION:
		break;
	case SCENE_STAGE1:
		break;
	case SCENE_STAGE2:
		break;
	case SCENE_STAGE3:
		break;
	case SCENE_END:
		break;
	default:
		break;
	}

}


void SceneMgr::Update() 
{
	m_scene->Update();
}
void SceneMgr::Draw() 
{
	m_scene->Draw();
}
void SceneMgr::Destroy() 
{
	if (m_pInst != nullptr)
		delete m_pInst;
}