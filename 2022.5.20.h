#pragma once
#include "Shape.h"

using namespace std;

class Animal
{
public:
    void Sound();
    void Sleeping();

private:
    int m_size;
    float m_weight;
    std::string m_name;
};

void Animal::Sound()
{
    std::cout << "Sound" << std::endl;
}

void Animal::Sleeping()
{
    std::cout << "Sleeping" << std::endl;
}

// �ζ��� �Լ�
/*
inline void Function(int x)
{
    std::cout << "x�� �� : " << x << std::endl;
}
*/

// main
/*
int main()
{
    // ��� �ʱ�ȭ ����Ʈ

    Shape rectangle(50,"Circle");


    // ���׼�

    int value;
    int result = 0;

    std::cin >> value;

    for (int i = 1; i < value; i++)
    {
        if (value % i == 0)
        {
            result += i;
        }
    }

    if (result > value)
    {
        std::cout << "���׼�" << std::endl;
    }
    else
    {
        std::cout << "���׼��� �ƴմϴ�." << std::endl;
    }


    // Ŭ���� �ܺ� �Լ�

    Animal cat;
    cat.Sound();
    

    // �ζ��� �Լ�

    Function(10);
  

    // ������

    int value;
    int result = 0;

    cin >> value;

    for (int i = 1; i <= value; i++)
    {
        if (value % i == 0)
        {
            result += i;
        }
    }

    if (result < value * 2)
    {
        std::cout << "������" << std::endl;
    }
    else
    {
        std::cout << "�������� �ƴմϴ�." << std::endl;
    }

    return 0;
}
*/
