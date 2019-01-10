#include "stdafx.h"
#include "EntryScene.h"
#include "Include.h"
#include "SceneMgr.h"

EntryScene::EntryScene()
{
}


EntryScene::~EntryScene()
{
}

void EntryScene::Init() 
{
	cout << "EntryScene Init!" << endl;
	SceneMgr::GetInst()->SetScene(SCENE_LOGO);
	
}
void EntryScene::Update() 
{
	SceneMgr::GetInst()->Update();
}
void EntryScene::Draw() {}
void EntryScene::Destroy() {}