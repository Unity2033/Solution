#pragma once
#include <iostream>
#include "Book.h"

class Person
{
public:
    // ������
    Person()
    {
        std::cout << "Create Person" << std::endl;
    }

    // �Ҹ���
    ~Person()
    {
        std::cout << "Delete Person" << std::endl;
    }

    void Info()
    {
        std::cout << age << std::endl;
        std::cout << weight << std::endl;
        std::cout << name << std::endl;
    }

    int age;
    float weight;
    std::string name;

};

// main
/*
int main()
{
    // ���� �Ҵ� �迭

    int * ptr = new int[3];

    ptr[0] = 1000;
    ptr[1] = 2000;
    ptr[2] = 3000;

    for (int i = 0; i < 3; i++)
    {
        std::cout << "ptr ������ ����Ű�� �ּ� : " << & ptr[i] << std::endl;
        std::cout << ptr[i] << std::endl;
    }

    // ���� �Ҵ��� ���� �� �迭 ���·� �޸𸮸� �Ҵ��ϰ� �Ǹ� �޸𸮸� ������ �� �迭 ���·� �������־�� �մϴ�.
    delete [] ptr;

    // ����             ��
    // ptr ------->
    //
    // ��۸� ������
    // �̹� ������ �޸𸮸� ����Ű�� �������Դϴ�.


    // ��ü �Ҵ�� ����

    Person * man = new Person();


    man->age = 20;
    man->weight = 70.5;
    man->name = "KimGeumSoo";

    man->Info();

    delete man;


    // ������ ����

    int value = 10;

    int & ref = value;

    std::cout << &value << std::endl;

    ref = 300;

    std::cout << "value�� �� : " << value << std::endl;
    std::cout << "ref�� �� : " << ref << std::endl;


    return 0;
}
*/