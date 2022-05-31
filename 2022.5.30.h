#pragma once
#include <iostream>
#include <set>
#include <string>

void Function(int x)
{
	std::cout << x << std::endl;
}

void Function(int x, int y)
{
	std::cout << x << "," << y << std::endl;
}

void Function(char x)
{
	std::cout << x << std::endl;
}

// ��ȯ������ �Լ��� �����ε��� ������ �� �����ϴ�.
/*
int Function(double x)
{
	return x;
}
*/

class Phone
{
public:
	Phone()
	{
		std::cout << "������~" << std::endl;
	}

	Phone(int x, int y)
	{
		call = x;
		size = y;

		std::cout << call << std::endl;
		std::cout << size << std::endl;
	}

private:
	int call;
	int size;
};

// main
/*
int main()
{
	// set

	// std::map -> key�� value
	// key�� Ȱ���ؼ� �����͸� Ȯ���մϴ�.

	// set -> key
	// key���� �ߺ��� ������ �ʽ��ϴ�.
	// insert ���Ұ� �ڵ����� ���ĵ˴ϴ�.


	std::set<int> data;
	std::set<int>::iterator iter;

	data.insert(10);
	data.insert(80);
	data.insert(35);
	data.insert(40);
	data.insert(50);

	for (iter = data.begin(); iter != data.end(); iter++)
	{
		std::cout << *iter << std::endl;

	}

	// [10] [35] [40] [50] [80]

	iter = data.find(77);

	if (iter != data.end())
	{
		std::cout << "�����Ͱ� �����մϴ�." << std::endl;
	}
	else
	{
		std::cout << "�����Ͱ� �����ϴ�." << std::endl;
	}

	// �Լ��� �����ε�

	   �ٸ� �Ű��������� ���� ���� �̸��� �Լ��� ���� �� ������ �� �ֽ��ϴ�.

	   Function('G');
	   Function(10, 20);

	   Phone iPhone(10,20);

	// O X ����
	// "OOXXOXXOOO�� ���� OX������ ����� �ֽ��ϴ�."
	// O�� ������ ���� ���̰�, X�� Ʋ�� ���Դϴ�.
	// ������ ���� ���� �� ������ ������ �� �������� ���ӵ� O�� ������ �˴ϴ�.
	// "OOXXOXXOOO" = 1 + 2 + 0 + 0 + 1 + 0 + 0 + 1 + 2 + 3 = 10

	// �Է¹��� ���ڹ迭�� �����ϰ�

	int result = 0;
	std::string input;
	int count = 1;

	std::getline(std::cin, input);

	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == 'O')
		{
			result += count;
			count++;
		}

		if (input[i] == 'X')
		{
			count = 1;
		}
	}

	std::cout << result << std::endl;
	
	return 0;
}
*/