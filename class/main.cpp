
#include <iostream>
#include "Character/Character.h"


int Add(int x, int y);
void Add(int* x, int number);
void SetNumber(int* pValue, int index, int value);



int main()
{
	
	//Character c;
	//std::cout << "클래스 생성했다!" << std::endl;

	// pointer
	int value = 0;
	int* pValue = &value;

	Add(pValue, 10);

	Character c;
	c.Print();

	return 0;
}

int Add(int x, int y) { return x + y; }
void Add(int* x, int number) { *x += number; }
// int* -> int 형식 주소값
// *int -> int형식 주소값을 값으로 변경


void Minus(int* x, int number) { *x -= number; }

void SetNumber(int* pValue, int index, int value)
{
	pValue[index] = value;
}