// 3.编写一个C++程序，它使用3个用户定义的函数(包括main( ))，并生成下面的输出:
#include <iostream>

using namespace std;

void func1(void);
void func2(void);

int main(void)
{
    func1();
    func1();
    func2();
    func2();
}

void func1()
{
    cout << "Three blind mice" << endl;
}
void func2()
{
    cout << "See how they run" << endl;
}