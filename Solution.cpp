#include <iostream>
#include <string>

// ���� �Լ�
class Animal 
{
public:
	int x = 100;

	// ���� �Լ�
	virtual void Sound()
	{
		std::cout << "�����Ҹ�~" << std::endl;
	}
	
private:
	int mouth;
	int eye;
	int leg;
};
class Dog : public Animal
{
public :
	void Sound()
	{
		std::cout << "�۸�~" << std::endl;
	}
};
class Cat : public Animal
{
public :
	void Sound()
	{
		std::cout << "�Ŀ�~" << std::endl;
	}
};
class Duck : public Animal
{
public :
	void Sound()
	{
		std::cout << "�в�~" << std::endl;
	}
};

// ���� ���� �Լ�
class Pen
{
   // ���� ���� �Լ�
   virtual void Drawing() = 0;
};
class Circle : public Pen
{
public :
	void Drawing()
	{
		std::cout << "���׶��" << std::endl;
	} 
};
class Rectangle : public Pen
{
public :
	void Drawing()
	{
		std::cout << "�׸�" << std::endl;
	}
};
class Star : public Pen
{
public :
	void Drawing()
	{
		std::cout << "��" << std::endl;
	}
};

int main()
{
	// ���� �Լ�
	/*
	Animal * animal = new Dog;
	Cat * cat = new Cat;
	Duck* duck = new Duck;

	animal->Sound();
	animal->Sound();

	animal = cat;
	animal->Sound();

	animal = duck;
	animal->Sound();
	*/

	// ���� ���� �Լ�
	/*
	// ���� ���� �Լ��� �ڽ��� ��ü�� ����ų �� �ֽ��ϴ�.
	// ���� Ŭ���� �ݵ�� �����ǵǾ�� �ϴ� ��� �Լ�
	Star * star = new Star;
	star->Drawing();

	Rectangle * rectangle = new Rectangle;
	rectangle->Drawing();
	*/
	
	// ���α׷��ӽ� 1 �ܰ�
    // �Ϻ��� ���ڿ� �Ǻ��ϱ�
	/*
	int count = 0;

	std::string input;
	std::getline(std::cin, input);

	for (int i = 0; i < input.length(); i++)
	{
		for (int j = 48; j <= 57; j++)
		{
			if (input[i] == (char)j)
			{
				count++;
			}
		}
	}

	if (count > 0)
	{
		std::cout << "�Ϻ��� ���ڿ��� �ƴմϴ�." << std::endl;
	}
	else
	{
		std::cout << "�Ϻ��� ���ڿ�" << std::endl;
	}
	*/

	return 0;
}

