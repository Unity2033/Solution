#include <iostream>
#include <string>
#include <map>

int main()
{   
	// ���� �����̳�
    /*
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
	*/

	// map
	/*
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
	*/

	// ���ĺ� ���� 
	// �� ���ĺ��� �ܾ �� ���� ���ԵǾ� �ִ��� ���ϴ� ���α׷��Դϴ�.
	
	// ���� �Է� -> baekjoon
	// 
	//              a b c d e f g h i j k l m n o p q r s t u v w x y z
	// ���� ��� -> 1 1 0 0 1 0 0 0 0 1 1 0 0 1 2 0 0 0 0 0 0 0 0 0 0 0

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
}