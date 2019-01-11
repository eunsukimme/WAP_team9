#pragma once // 헤더가드 , 헤더파일 중복을 막기위해 사용. 클래스 생성시 헤더파일에 자동으로 생성됨.
#include "Include.h"
class GameScene; // GameScene객체를 사용하기위해 선언. #include "GameScene"을 통해 객체를 사용할수도 있지만 가급적이면 헤더파일에는 include
//를 쓰지않는 것이좋다. 이유는 헤더파일이 서로를 포함하는 경우 충돌이 일어나기 떄문이다. 예를들어서 class a의 헤더파일에서 class b를 include하고
//class b에서 class a를 include 하는경우 서로가 서로를 포함하면서 충돌 오류가 난다.(컴파일러가 이런건 제대로 안알려줘서 찾기 힘드니 사전에 방지하자!)
//단 cpp파일에서 #include "GameScene"을 해줘야 한다.(왜냐하면 GameScene클래스가 기존에 있는 클래스인지 아니면 새로 생성한 클래스인지 컴파일러가 
//알 수 없기때문에! 모호한 오류를 일으킨다.)
class SceneMgr
{
private:// 밑에 선언된 변수 or 함수는 이 클래스 외부에서 접근할 수 없다.
	static SceneMgr * m_pInst; // 자기자신(SceneMgr)을 포인터 변수로 갖는다. 자세한 설명은 밑에서..
	static GameScene * m_scene;// 여기서 GameScene은 Logo,Menu,Option..등등의 부모 클래스이다. SceneMgr.cpp파일에서 자세히 다루겠다.
public:// 밑에 선언된 변수 or 함수는 이 클래스 외부에서도 접근할 수 있다.
	static SceneMgr * GetInst() // 자기자신(SceneMgr)의 포인터 변수를 반환하는 함수이다.
	{
		if (m_pInst == nullptr) // m_pInst 변수가 nullptr일 때 (nullptr은 포인터변수를 0으로 만드는 값이다. 0과 같다고 보면됨!)
			m_pInst = new SceneMgr(); // m_pInst에 메모리 할당을 해준다.
		
		return m_pInst; // 그리고 m_pInst를 반환한다.
	} // 이 함수와 위의 m_pInst가 가지는 의미 : 이것은 디자인 패턴중 하나인 '싱글턴 패턴'이다. 싱글턴 패턴은 프로그램 내에 유일하게 존재하는
	//클래스를 만들어 메모리를 한 번만 할당해주고 필요할 때마다 어디서든 접근 가능하게 만들어 주는 기술이다.
	//싱글턴 패턴을 사용하는 이유는 메모리 낭비를 방지해주고 어디서든 쉽게 접근할 수 있기 떄문에 클래스간의 호출이 직관적이고 간단하다.

	void SetScene(SCENE _scene); // 다음 씬으로 넘어가기 위한 함수. 파라미터 값의 SCENE은 enum값이다. 밑에서 자세히 설명하겠다.

public:
	void Update();
	void Draw();
	void Destroy();
private:// 생성자를 private으로 만든 이유 : 생성자를 private로 만들면 다른곳에서 이 클래스를 생성할 수 없다. 예를 들면 SceneMgr s1 ; 는 오류가
	// 난다.즉 생성자를 private으로 만들어 객체를 생성하지 못하게하고 오로지 GetInst() 함수를 통해서만 이 클래스에 접근가능하도록 하기 
	// 위함이다. 이것도 싱글톤 패턴의 기능을 위한 설계이다. 자세한 설명은 밑에서..
	SceneMgr();
public:
	~SceneMgr();
};


// 클래스 내에서의 static 변수와 static 함수에 대한 설명 : static 변수는 이 클래스가 몇 번이 생성되더라도 유일하게 존재하는 변수이다.
// 예를들어 class Test가 있고, Test 내에 static int k =0; 이 정의되어 있다고 가정하자. Test a; Test b로 클래스를 2개 생성하고
// a.k +=1; b.k +=1을 하고 a.k 값을 출력하면 몇이 나올까? 정답은 2이다. 왜냐하면 class가 몇 번 생성된다 해도 static int k는 유일하게 존재하는
// 변수이기 때문에 가령 b의 멤버변수 k를 1 증가시킨다고 해도 a의 멤버변수 k에 영향을 미치는것이다.
// static 함수는 외부에서 이 클래스를 선언하지 않아도 호출할 수 있도록 만들어준다. 네임스페이스를 이용해 'SceneMgr::GetInst()' 이런식으로
// 호출할 수 있다.

// m_pInst와 GetInst()에 대한 자세한 설명 : 일단 이 변수와 함수는 싱글톤 패턴을 위한 도구이다. m_pInst는 이 클래스(자기자신)을 포인터로 만든것이고
// GetInst()함수 안에서 m_pInst ==nullptr일 때 즉, 메모리 할당이 되어있지 않다면 메모리를 할당해주고 이미 할당되어 있다면 기존의 메모리를
// 재사용하겠다는 의미이다.그리고 생성자를 private으로 만들어 줬기 때문에 이 클래스는 오로지 GetInst()함수를 통해서만 생성될 수 있다.
// GetInst()함수의 사용방법은 이렇다. 호출하고자 하는 곳에서 SceneMgr::GetInst()->func() (여기서 func은 이 클래스 내의 함수들이다.)로 적어주면
// 된다.

//부족한 설명은 SceneMgr.cpp파일에서 설명하겠습니다!




