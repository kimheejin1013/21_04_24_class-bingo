#include "Character.h"
#include <iostream>

Character::Character()

	: money(0) // ������ �ʱ�ȭ
{
	money = 0; // �Լ� �ʱ�ȭ
	std::cout << "������!" << std::endl;

}

Character::~Character()
{
	std::cout << "�Ҹ���!" << std::endl;

}

void Character::Print()
{
	std::cout << "��" << money << std::endl;
}
