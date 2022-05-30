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

/*
#include <iostream>
#include <string>
#include <map>

int main()
{
	// ���� �����̳�

	// ��� ����� �����̳� �����Դϴ�.

	// int value = 10;
	// [key] [value]

	// name          price
	// [sword] ----- [1000] map : ���� �ߺ��� ����մϴ�.
	// [armor] ----- [300]
	// [Gloves] ----- [1000]
	// [sword] x <- map�� key ���� �ߺ��� ������ �ʽ��ϴ�.

	// map�� � ������ �Ǿ� �ֳ���?
	// ���� �� Ʈ�� ������ �Ǿ� �ֽ��ϴ�.
	// ���� �� Ʈ�� : �ڰ� ���� ���� Ž�� Ʈ���ν� ���԰� ������ �Ͼ�� ��� �ڵ����� �� ���̸� �۰� �����ϴ� ������ ���� �������� Ʈ���� ���̰� �������� ġ��ġ�� ���� �����ϱ� ���ؼ� �Դϴ�.

	// ���� ���� Ư���� ���� �ֱ� ���ؼ��� map ����Ǿ� �ִ� key���� �˻����ֽø� �˴ϴ�.


	// map

			// Key ---- Value
	std::map<std::string, int> data;

					   // ������ �̸� <-> �������� ����
	data.insert(std::make_pair("sword", 200));
	data.insert(std::make_pair("armor", 500));
	data.insert(std::make_pair("shoes", 750));

	for (auto iter = data.begin(); iter != data.end(); iter++)
	{
		std::cout << "Key : " << iter->first << std::endl;
		std::cout << "Value : " << iter->second << std::endl;
	}

	std::cout << "�˻��� Key�� �� : " << data.find("shoes")->second << std::endl;
	data.erase("shoes");

	for (auto iter = data.begin(); iter != data.end(); iter++)
	{
		std::cout << "Key : " << iter->first << std::endl;
		std::cout << "Value : " << iter->second << std::endl;
	}

	// ���ĺ� ����
	// �� ���ĺ��� �ܾ �� ���� ���ԵǾ� �ִ��� ���ϴ� ���α׷��Դϴ�.

	std::string value;

	std::getline(std::cin, value);

	int result = 0;

	for (int i = 97; i <= 122; i++)
	{
		for (int j = 0; j < value.length(); j++)
		{
			if (value[j] == (char)i)
			{
				result++;
			}
		}

		std::cout << result << std::endl;
		result = 0;
	}


	return 0;
}*/