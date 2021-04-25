#include "Character.h"
#include <iostream>

Character::Character()

	: money(0) // 생성자 초기화
{
	money = 0; // 함수 초기화
	std::cout << "생성자!" << std::endl;

}

Character::~Character()
{
	std::cout << "소멸자!" << std::endl;

}

void Character::Print()
{
	std::cout << "돈" << money << std::endl;
}
