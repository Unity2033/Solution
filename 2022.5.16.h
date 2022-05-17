#pragma once
#include <iostream>
#include <conio.h>
#include <windows.h>

class TV
{
public:
    void RemoteControl_UP()
    {
        channel++;

        if (channel > 10)
        {
            channel = 0;
        }

        std::cout << "channel : " << channel << " �� " << std::endl;
    }

private:
    int channel = 0;
    int volume = 0;
};

class Transportation
{
protected:
    std::string name;

    float speed = 0.0;
    int wheel = 0;
    int handle = 0;
};

class car : public Transportation
{
public:

    void info()
    {
        speed = 100;
        wheel = 4;
        handle = 1;
        name = "Sonata";

        std::cout << "Name : " << name << std::endl;
        std::cout << "Speed : " << speed << std::endl;
        std::cout << "Wheel : " << wheel << std::endl;
        std::cout << "handle : " << handle << std::endl;
    }
};

class airplane : public Transportation
{
public:
    void info()
    {
        speed = 400;
        wheel = 3;
        handle = 2;
        name = "KF15";

        std::cout << "Name : " << name << std::endl;
        std::cout << "Speed : " << speed << std::endl;
        std::cout << "Wheel : " << wheel << std::endl;
        std::cout << "handle : " << handle << std::endl;
    }
};

// main
/*
int main()
{
    // �߻�ȭ

    TV LG_TV;

    airplane A10;
    car B10;

    while (1)
    {
        if (GetAsyncKeyState(VK_RETURN))
        {
            A10.info();

            std::cout << std::endl;

            B10.info();

            std::cout << std::endl;

            Sleep(100);
        }

        if (GetAsyncKeyState(VK_SPACE))
        {
            LG_TV.RemoteControl_UP();
            Sleep(100);
        }
    }
   

    // ����
    //   4 byte
    // [ [ ptr ]        ]     
    // ��  |
    // [  [200][500][][][][][] ]

    {
        // new�� �޸𸮸� �������� �Ҵ��ϴ� �������Դϴ�.
        // �� ������ �޸𸮰� 4byte�� �Ҵ�ǰ� 10�̶�� ���� �����մϴ�.
        int* ptr = new int(10);
        //   ��
        //  4byte  
        // [    ] 
        //   0        

        // 4 byte
        *ptr = 100;

        std::cout << "ptr�� ����Ű�� �� :" << *ptr << std::endl;

        int value = 100;
    } // <- value [100] ���� ptr�� ������ �Ǿ����ϴ�.  


    return 0;
}
*/