#include "stdafx.h"
#include "SceneMgr.h"
#include "Logo.h"
SceneMgr* SceneMgr::m_pInst = nullptr; // static으로 선언된 변수는 반드시 외부에서 초기화를 시켜줘야한다!
GameScene* SceneMgr::m_scene = nullptr; // 마찬가지!
SceneMgr::SceneMgr()
{
	
}


SceneMgr::~SceneMgr()
{
}

void SceneMgr::SetScene(SCENE _scene)// SCENE은 enum으로 정의된 변수이다. 파라미터 값으로 어떤 씬으로 넘어갈지를 설정해준다.
{
	
	if (m_scene != nullptr) // m_scene에 값이 할당되어 있다면
	{
		m_scene = nullptr;// 메모리상의 값을 지우고
		delete m_scene; // 메모리를 해제시킨다.
	} 
	
	switch (_scene)
	{
	case SCENE_LOGO://로고화면으로 넘어간다면
		m_scene = new Logo(); // 현재 씬을 로고로 할당해준다.(m_scene은 GameScene의 포인터 변수이며 Logo 클래스의 부모 클래스이다.
				      // 이것이 순수가상함수를 이용하는 이유중 하나인데, 부모는 자식의 클래스로 재할당 될 수있다.
				      // 이것을 업캐스팅이라고 불리며 반대인 다운캐스팅도 가능하지만 더 좁은 메모리를 참조하는 것이므로
			  	      // 거의 사용되지 않는다. 아무튼 부모 클래스 하나가 경우에 따라 여러 가지 자식 클래스로 재할당 된다는것은
				      // 굉장히 생산적인 것이다!
		m_scene->Init();      // m_scene(지금은 Logo를 가르킨다.)의 초기화 함수를 호출한다!
		break;
	case SCENE_MENU: // 메뉴인경우도 똑같이 해주면됨
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
	m_scene->Update(); // m_scene이 무엇이 될지는 모른다. SetScene을 통해서 m_scene이 정해지고 그에 따른 클래스의 update()가 실행됨!
}
void SceneMgr::Draw() 
{
	m_scene->Draw(); //update와 같다!
}
void SceneMgr::Destroy() 
{
	if (m_pInst != nullptr) // 만약 m_pInst의 메모리가 남아있다면
		delete m_pInst; //해제시켜준다.
}
