#pragma once // 헤더 가드, 헤더 파일의 중복을 방지시킨다. 클래스 생성시 헤더파일에 자동으로 생성됨
class GameScene
{
public:
	virtual void Init() =0; // 순수 가상함수 , 정의는 됐지만 구현은 자식 오브젝트에게 미룬다.
	virtual void Update() =0;
	virtual void Draw() =0;
	virtual void Destroy()=0;
public:
	GameScene();
	virtual ~GameScene(); // 소멸자에 virtual을 붙여주지않으면 자식 오브젝트의 소멸자는 절대로 호출될 수 없다.
};

