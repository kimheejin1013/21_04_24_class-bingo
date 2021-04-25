#pragma once

struct Coffee
{
public:
	Coffee()
		:m_Price(100)
	{
	}

private:
	int m_Price;

public:
	int GetPrice() { return m_Price; }

};

struct Coke
{
public:
	Coke()
		:m_Price(200)
	{
	}

private:
	int m_Price;

public:
	int GetPrice() { return m_Price; }

};

struct Milk
{
public:
	Milk()
		:m_Price(300)
	{ 
	}

private:
	int m_Price;

public:
	int GetPrice() { return m_Price; }

};