#include <iostream>

int main()
{
	int value = 100;
	char character = 'A';

	char cptr[10];

	// ���ڿ� �Է� �Լ�
	gets_s(cptr, sizeof(cptr));

	// float ������ �Ҽ��� 6 �ڸ����� ��Ȯ���� ǥ���մϴ�.
	float variable = 6.375;

	// double ������ �Ҽ��� 15 �ڸ����� ��Ȯ���� ǥ���մϴ�.
	double x = 1.11111111111111;
 
	std::cin >> value;

	std::cout << value << std::endl;
	std::cout << variable << std::endl;
	std::cout << x << std::endl;

	std::cout << character;
}

