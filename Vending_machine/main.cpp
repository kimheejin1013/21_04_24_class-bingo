
#include "Character/CharacterInfo.h"
#include "Character/Product.h"
#include <iostream>

int main()

{
	CharacterInfo c;
	c.Print();

	Coffee cf;
	Coke ck;
	Milk m;
	
	int choose;

	std::cout << "소지금 : " << c.GetMoney() << std::endl;
	std::cout << "[자판기]" << std::endl;
	std::cout << "=============================" << std::endl;
	std::cout << "커피 : 1, 콜라 : 2, 우유 : 3" << std::endl;
	std::cout << "=============================" << std::endl;
	std::cout << "구매할 음료수를 입력하시오" << std::endl;

	std::cin >> choose;

	if (choose == 1 && c.GetMoney() >= cf.GetPrice())
	{

	}
	else if (choose == 2 && c.GetMoney() >= ck.GetPrice())
	{

	}
	else if (choose == 3 && c.GetMoney() >= m.GetPrice())
	{

	}
	else
		std::cout << "잔액이 부족합니다." << std::endl;

	return 0;
}

