#pragma once

// class�� �⺻ ���� �����ڴ� private:
// struct�� �⺻ ���� �����ڴ� public:

// ���� ���� | private | protected | public
//   �ڽ�		  O			 O			O
//   �ڽ�		  X			 O			O
//   �ܺ�		  X			 X			O
class Character
{
public: // ctrl + . ������ Ȯ��
	Character();	 // ������ : Ŭ������ �����԰� ���ÿ� �� �� ���� ȣ��

	~Character();	 // �Ҹ��� : Ŭ������ �����ʰ� ���ÿ� �� �� ���� ȣ���

private:
	int money;

public: // ������ ������
	int GetMoney() { return money; } // Getter
	void SetMoney(int money){ this->money = money; } // Setter


	void Print();
};

struct ST
{
	int money;
};

