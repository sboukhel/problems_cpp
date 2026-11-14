#include <iostream>
#include <cmath>
using namespace std;

float readnumber(void){
    float number;
    cout << "enter number :" << endl;
    cin >> number;
    return number;
}

int MyFloor(float number){
    if (number < 0)
        return (number - 0.5);
    return (number - 0.5);
}

void printResult(float  number){
    cout << "My floor is : " << MyFloor(number) << endl;
    cout << "C++ floor is : " << floor(number) << endl;
}

int main(){
    printResult(readnumber());
    return 0;
}