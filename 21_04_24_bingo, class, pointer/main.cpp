
#include <iostream>
#include <time.h>

// 솔루션 탐색기 : ctrl + alt + L

int numbers[25] = { 0, }; // 빙고 숫자 넣을 배열, 초기화

void Start();

int main()
{
	srand(time(NULL)); // 현재 시간으로 시드 생성

	for (int i = 0; i < 25; ++i)
	{
		int value = rand() % 25 + 1;
		for (int k = 0; k < i; ++k)
		{
			if (value == numbers[k])
			{
				value = rand() % 25 + 1;
				k = -1;
			}
		}
	}

	// 100번 랜덤하게 섞어준다.
	for (int i = 0; i < 100; ++i)
	{
		int dest = rand() % 25;
		int sour = rand() % 25;

		// dest = 0 , sour = 10 가정
		// numbers[0] = 14; numbers[10] = 20;

		int temp = numbers[dest]; // temp = 14;
		numbers[dest] = numbers[sour]; // numbers[0] = numbers[10]
		numbers[sour] = temp; // numbers[10] = temp;
	}

	while (true)
	{
		Start();
	
	}
	return 0;
}

int BingoCount = 0;

void Start() 
{
	system("cls");
	int input = 0;
	std::cin >> input;

	//찾기
	for (int i = 0; i < 25; ++i)
	{
		if (input == numbers[i])
		{
			numbers[i] = -1;
			break;
		}
	}
	//검사!!
	for (int i = 0; i < 5; ++i)
	{	//가로검출
		if (numbers[i * 5] == -1 &&
			numbers[i * 5 + 1] == -1 &&
			numbers[i * 5 + 2] == -1 &&
			numbers[i * 5 + 3] == -1 &&
			numbers[i * 5 + 4] == -1)
		{
			BingoCount++;
		}

		//세로검출
		if (numbers[i] == -1 &&
			numbers[i + 5] == -1 &&
			numbers[i + 5 * 2] == -1 &&
			numbers[i + 5 * 3] == -1 &&
			numbers[i + 5 * 4] == -1)
		{
			BingoCount++;
		}
	}
	
	// 역대각선 (\)
	if (numbers[0] == -1 &&
		numbers[6] == -1 &&
		numbers[12] == -1 &&
		numbers[18] == -1 &&
		numbers[24] == -1)
	{
		BingoCount++;
	}

	// 대각선 (/)
	if (numbers[4] == -1 &&
		numbers[8] == -1 &&
		numbers[12] == -1 &&
		numbers[16] == -1 &&
		numbers[20] == -1)
	{
		BingoCount++;
	}
}
