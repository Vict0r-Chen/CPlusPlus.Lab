// 2.编写一个C++程序，它要求用户输入一个以long为单位的距离， 然后将它转换为码(一long等于220码)。
#include <iostream>

double convertLongToMa(double valueOfLong);
int main(){
    using namespace std;
    double valueOfLong;
    cout << "Please enter a value of long:" << endl;
    cin >> valueOfLong;
    cout << "The value of Ma: " << convertLongToMa(valueOfLong) << endl;
}
double convertLongToMa(double valueOfLong){
    double ma = valueOfLong / 220;
    return ma;
}