#pragma once
#include <iostream>
#include <vector>
#include <queue>
#include <stack>

// main
/*
int main()
{
	// ������ ����

	//  �迭 [0] [1] [2] [3] [4]
	int array[5] = { 0,1,2,3,4 };

	//  pointer ---> [0]
	int* pointer = array;

	for (int i = 0; i < 5; i++)
	{
		std::cout << "pointer�� ����Ű�� �ּ� : " << pointer << std::endl;
		std::cout << "array�� �� : " << *pointer << std::endl;
		pointer++;
	}


	// �ݺ���

	std::vector<int> data = { 0,1,2,3,4 };

	std::vector<int>::iterator pointer;

	// iterator�� vector�� ���� �ּҸ� ����ŵ�ϴ�.
	pointer = data.begin();


	// iterator�� vector�� ������ �ּ� + 1�� ��Ű���ϴ�. 
	for (pointer = data.begin(); pointer != data.end(); pointer++)
	{
		std::cout << *pointer << std::endl;
	}


	// �����̳� �����

	// queue

	std::queue<int> data;

	// ť �����̳ʿ� 5���� �����͸� �����մϴ�.
	//  <- [ ] [ ] [ ] [ ] [ ] <-
	// ť �����̳� �ȿ� �ִ� �� ��ü�� ����ؾ��մϴ�.
	// �ݺ������� front() ����ϸ鼭 ���Ҹ� �����ϸ� ��ü ���Ҹ� ��½�ų �� �ֽ��ϴ�.
	// ť �����̳ʿ� �����Ͱ� �� �������� �ݺ����� �����մϴ�.

	data.push(10);
	data.push(20);
	data.push(30);
	data.push(40);
	data.push(50);

	while (data.empty() == 0)
	{
		std::cout << data.front() << std::endl;
		data.pop();
	}

	// empty : ���� �����Ͱ� ����ִٸ� 1�� ��ȯ�մϴ�.
	//         ���� �����Ͱ� �ִٸ� 0�� ��ȯ�մϴ�.
	//std::cout << data.empty() << std::endl;


	// stack

	std::stack<int> data;

	// ----------
	// [10] [20] [30] [40] [50]
	// ----------

	data.push(10);
	data.push(20);
	data.push(30);
	data.push(40);
	data.push(50);

	while (data.empty() == 0)
	{
		std::cout << data.top() << std::endl;
		data.pop();
	}

	// puts �Լ�

	puts("League");
	puts("of");
	puts("Legend");

	return 0;
}
*/