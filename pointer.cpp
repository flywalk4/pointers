#include <iostream>
#include <string>

int main()
{
    //��������� - ��� �� ��� ��������� ������ ����������
    // ������ - �������� ��� �� ������ ������
    short a = 12;
    int b = 10;
    std::string c = "asvsad";

    short *pa = &a;
    int *pb = &b;
    std::string *pc = &c;

    std::cout << "Variable a: address=" << pa << "\t value=" << *pa << std::endl;
    std::cout << "Variable b: address=" << pb << "\t value=" << *pb << std::endl;
    std::cout << "Variable c: address=" << pc << "\t value=" << *pc << std::endl;

    return 0;
}
