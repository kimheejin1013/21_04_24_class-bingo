#pragma once

class CharacterInfo
{
public:
	CharacterInfo();
	~CharacterInfo();

private:
	int m_Money;

public:
	// �Լ� ����
	int GetMoney() { return m_Money; }
	void SetMoney(int m_Money) { this->m_Money = m_Money; }
	
	void Print();
};