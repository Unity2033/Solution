#pragma once
#include <iostream>

class SuperPopup
{
public:
	SuperPopup()
	{
		std::cout << "Super PopUp Create" << std::endl;
	}

	virtual ~SuperPopup()
	{
		std::cout << "Super PopUp Delete" << std::endl;
	}
};
class ChildPopup : public SuperPopup
{
public:
	ChildPopup()
	{
		std::cout << "Child PopUp Create" << std::endl;
	}

	~ChildPopup()
	{
		std::cout << "Child PopUp Delete" << std::endl;
	}
};
class Speaker
{
private:
	int volume = 0;

public:
	Speaker() { }

	Speaker(int volume)
	{
		this->volume = volume;
		std::cout << this->volume << std::endl;
	}

	void Click()
	{
		std::cout << "���" << std::endl;
	}
};
class Mouse
{
private:
	float Sensor = 0.0f;
public:
	Mouse() { }

	Mouse(float Sensor)
	{
		this->Sensor = Sensor;
		std::cout << this->Sensor << std::endl;
	}

	void Click()
	{
		std::cout << "����" << std::endl;
	}
};
class Computer : public Mouse, public Speaker
{
public:
	Computer(float mouse, int speaker) : Mouse(mouse), Speaker(speaker)
	{

	}
};

// main
/*
int main()
{
	// ���� �Ҹ���

	ChildPopup * ptr = new ChildPopup;
	SuperPopup * base = ptr;

	delete base;


	// ���� ���
	
	Computer Mac(10.5,20);

	// Ŭ���� �� ���� ����� �Լ��� �̸��� ���� �� ���� ���� �����ڸ� ����ؼ� �������ּž� �մϴ�.
	Mac.Mouse::Click();
	Mac.Speaker::Click();


	// �������� ������ ���� ���� ���ϱ�

	int array[10] = { 0, };
	int number = 0;
	int value;

	for (int i = 0; i < sizeof(array) / sizeof(int); i++)
	{
		std::cin >> value;
		array[i] = value % 42;
	}

	for (int i = 0; i < sizeof(array) / sizeof(int); i++)
	{
		int count = 0;

		for (int j = i + 1; j < sizeof(array) / sizeof(int); j++)
		{
			if (array[i] == array[j])
			{
				count++;
			}
		}

		if (count == 0)
		{
			number++;
		}
	}

	std::cout << number << std::endl;

	return 0;
}
*/

