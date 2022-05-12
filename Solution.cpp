#include <iostream>
#include <windows.h>
#include <conio.h>

// class�� ���� �����ڸ� ���� �������� ������ Private���� �����˴ϴ�.
class Monster 
{ 
	// ���� 
public :
	int x;
	int y;
	int z;

	void Death()
	{
		HP -= 10;
		std::cout << HP << std::endl;
	}

	// ��ȣ
protected :
	int money = 100;

	// �����
private :

	int HP = 100;

	void Attack()
	{
		std::cout << "Attack" << std::endl;
	}
};

class Child_Monster : public Monster
{

public:
	void Speaking()
	{
		std::cout << "Hello ~" << std::endl;
		std::cout << money << std::endl;
	}
};

// struct�� ���� �����ڸ� ���� �������� ������ public���� �����˴ϴ�.
struct Object
{	
	int x = 0; // ��� ����
	int y = 0;
	int z = 0;

	int HP = 100;

	void Attack() // ��� �Լ�
	{
		std::cout << "Attack" << std::endl;
	}

	void Health()
	{
		std::cout << "current HP : " << HP << std::endl;
	}
};


int main()
{
    Object cube;
	Monster orc;

	std::cout << cube.x << std::endl;
	std::cout << cube.y << std::endl;
	std::cout << cube.z << std::endl;

	while (1)
	{
		/*
		if (GetAsyncKeyState(VK_SPACE))
		{
			cube.HP -= 10;
			cube.Health();
			Sleep(100);
		}

		if (cube.HP <= 0)
		{
			break;
		}
		*/

		if (GetAsyncKeyState(VK_SPACE))
		{
			orc.Death();
			Sleep(100);
		}

	}

}

