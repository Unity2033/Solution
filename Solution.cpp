#include <iostream>
#include <windows.h>
#include <conio.h>
#include <vector>
#include <time.h>

static int stage = 5;
int value = 0;

std::vector<std::string> arrow;

void Initialize()
{
    srand(time(NULL));

    for (int i = 0; i < stage; i++)
    {
        value = rand() % 4;

        switch (value)
        {
        case 0: arrow.push_back("��");
            break;
        case 1: arrow.push_back("��");
            break;
        case 2: arrow.push_back("��");
            break;
        case 3: arrow.push_back("��");
            break;
        }
    }
}

int main()
{
    // ȭ��ǥ�� �߸� �Է����� �� ������ ����ǵ��� �����մϴ�.
    // �׸��� �������� ���� �����մϴ�.
    // ���������� ���̵��� ���� 5, 6 ,7 ,8, 9
    // ���������� �� Ŭ�����ϸ� "������ �Ϻ��ϰ� �����Ͽ����ϴ�."

    int Health = 10;

    Initialize();

    while (1)
    {
        if (Health == 0)
        {
            system("cls");
            std::cout << "������ �Ϸ����� ���ϰ� �����Ͽ����ϴ�." << std::endl;
        }

        if (stage == 10)
        {
            system("cls");
            std::cout << "������ ���������� �Ϸ��Ͽ����ϴ�." << std::endl;
        }

        if (arrow.size() == 0)
        {
            stage++;
            Initialize();
        }

        for (auto Element : arrow)
        {
            std::cout << Element << "  ";
        }

        std::cout << "Health : " << Health << std::endl;

        int key = _getch();

        system("cls");
    
        switch (key)
        {
           case 72 : 
               if (arrow.back() == "��") arrow.pop_back();
               else Health--;
               break;
           case 75 : 
               if (arrow.back() == "��") arrow.pop_back();
               else Health--;
               break;
           case 77 : 
               if (arrow.back() == "��") arrow.pop_back(); 
               else Health--;
               break;
           case 80 :
               if (arrow.back() == "��") arrow.pop_back();
               else Health--;
               break;
        }
    }
     
    return 0;
}

