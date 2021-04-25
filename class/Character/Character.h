#pragma once

// class의 기본 접근 제한자는 private:
// struct의 기본 접근 제한자는 public:

// 접근 유무 | private | protected | public
//   자신		  O			 O			O
//   자식		  X			 O			O
//   외부		  X			 X			O
class Character
{
public: // ctrl + . 눌러서 확인
	Character();	 // 생성자 : 클래스가 선언함과 동시에 단 한 번만 호출

	~Character();	 // 소멸자 : 클래스가 삭제됨가 동시에 단 한 번만 호출됨

private:
	int money;

public: // 접근자 설정자
	int GetMoney() { return money; } // Getter
	void SetMoney(int money){ this->money = money; } // Setter


	void Print();
};

struct ST
{
	int money;
};

