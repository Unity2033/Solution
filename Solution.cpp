#include <iostream>

using namespace std;

namespace A_SPACE
{
    int value = 100;

    void Function()
    {
        std::cout << "A Space" << std::endl;
    }
}

namespace B_SPACE
{
    int value = 200;

    void Function()
    {
        cout << "B Space" << endl;    
    }

    namespace B_COPY_SPACE
    {
        int value = 800;
    }
}

using namespace A_SPACE;

int main()
{
    // ���� ��� �ݺ���
    /*
    // �������� ������ �˷����� �ʾƵ� ó������ ������ ��ȸ�� ���ִ� �ݺ����Դϴ�.

    int array[5] = { 13,66,100,72,5 };
    double data[5] = { 10.6, 8.75, 6.33, 1.23, 4.41 };

    // ���� ��� �ݺ����� �迭�� �ִ� ��ҿ� ������ �� ����.
    // ������ ����Ʈ(array, data)��Ҹ� Element ������ ���縦 �ϱ� ������ ��ҿ� ������ �� ����.
    // ���縦 �����Ƿ� ���� ����� �߻��մϴ�.

    // const�� ����ϰ� �Ǹ� Element�� ���� ������ �� ����.
    for (auto & Element : array)
    { 
        Element = 0;
        std::cout << Element << std::endl;
    }
    */

    // ���� ���� ������
    /*
    // �̸� �������� �ĺ��ڸ� �������ִ� �������Դϴ�.
    cout << value << endl;
    cout << value << endl;
    A_SPACE::Function();
    Function();

    cout << B_SPACE::B_COPY_SPACE::value << std::endl;
    */

    return 0;
}

