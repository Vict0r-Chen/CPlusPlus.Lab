// 4.编写一个程序，让用户输入其年龄，然后显示该年龄包含多少 个月，如下所示:
#include <iostream>

using namespace std;

int getMonthOfYear(int year);
int main(){
    int age;
    cout << "Enter your age:" << endl;
    cin >> age;
    int months = getMonthOfYear(age);
    cout << "Months: " << months << endl;
}
int getMonthOfYear(int year){
    int months = year * 12;
    return months;
}