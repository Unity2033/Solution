#pragma once
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <list>
#include <vector>
#include <time.h>

int value = 5;

using namespace std;


// main
/*
int main()
{
	// list 
	// ��� ������� ����� �޸� �����Դϴ�.
	// ��Ÿ�ӿ� �����̳��� ũ�⸦ ���������� ������ �����ؿ�.

	std::list<int> value;

	value.push_back(878);
	value.push_back(44);
	value.push_back(1);
	value.push_front(5);

	srand(time(NULL));
	int variable = 0;

	for (auto& Element : value)
	{
		std::cout << Element << "  ";
	}

	while (1)
	{
		int key = _getch();

		switch (key)
		{
			case 32 :
				variable = rand() % 100;
				value.push_back(variable);
				break;
		}

		system("cls");

		value.sort();

		for (auto& Element : value)
		{
			std::cout << Element << "  ";
		}
	}

	// �ݺ���
	// ������ �����̳��� ��Ҹ� ����Ű�� �������Դϴ�.

	int array[5] = { 0,1,2,3,4 };

	std::cout << &array[0] << std::endl;
	std::cout << array[0] << std::endl;
	std::cout << &array[0]+1 << std::endl;
	std::cout << array[0]+1 << std::endl;

	vector<int> Score;

	Score.push_back(5);
	Score.push_back(10);
	Score.push_back(15);
	Score.push_back(20);

	// �ݺ��ڰ� ���� ����Ű�� iter�� Score.begin(vector�� �����ּҸ� ����ŵ�ϴ�.)
	//
	// begin                             end
	//  0       1        2        3       4
	// [5]     [10]     [15]     [20]   [  ]
	// iter = 0 -> 1 ->

	for (vector<int>::iterator iter = Score.begin(); iter != Score.end(); iter++)
	{
		std::cout << &iter << std::endl;
		std::cout << *iter << std::endl;
	}

	int value = 100;

	// ���� ������ ���� ������ �̸��� ���� �� ������ ����ϰ� �Ǹ� ���� ������ �켱������ �����Ƿ� ���� ������ ��µ˴ϴ�.
	// ������, :: ���� ���� �����ڸ� ����Ͽ� ���� ������ ��������� ������ �� �ֽ��ϴ�.

	std::cout << "value�� �� : " << value << std::endl;
	std::cout << "value�� �� : " << ::value << std::endl;

	return 0;
}
*/