#pragma once
#include <iostream>
#include <conio.h>
#include <windows.h>

// �⺻ �Ű�����
/*
void Function(int x, int y, int z = 20)
{
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;
}
*/

// main
/*
int main()
{
    // bool : 1 ����Ʈ ũ���� �ڷ������� true�� false���� ������ �� �ֽ��ϴ�.
    bool condition = true;

    // ������ ������ �� �ڷ��� ��������� �Է��߽��ϴ�.
    auto value = 10.636;

    // �⺻ �Ű������� �Լ��� ȣ���� �� �Ű������� ���� �ֱ� ������ �μ��� �־����� �ʾƵ� �Լ��� ȣ���� �� �ֽ��ϴ�.

    // Function(x, y = 100)
    // �Ű� ���� ������ �Լ��� ȣ���� ���� ���ʿ��� ���� ���������� ���� ����˴ϴ�.
    // �⺻ �Ű� ������ ���ʺ��� �����ϰ� �Ǹ� �Ű����� ��� �����ؾߵǴ��� �𸣴� ��Ȳ�� �߻��մϴ�.

    // �⺻ �Ű�����

    Function(200,360);


    // bool ���� 

    while (condition)
    {
        std::cout << value << std::endl;

        if (GetAsyncKeyState(VK_SPACE))
        {
            condition = false;
        }
    }


    // ȸ�� �Ǻ� 

    int result = 0;

    char array[] = { "level" };

    for (int i = 0; i < (sizeof(array) - 1) / 2; i++)
    {
        if (array[i] == array[sizeof(array) - 2 - i])
        {
            result++;
        }
    }

    if (result == (sizeof(array) - 1) / 2)
    {
        std::cout << "ȸ���Դϴ�." << std::endl;
    }
    else
    {
        std::cout << "ȸ���� �ƴմϴ�." << std::endl;
    }

}
*/

