#include <iostream>
#include <cmath>
using namespace std;

float readnumber(void){
    float number;
    cout << "enter number :" << endl;
    cin >> number;
    return number;
}

int MyCeil(float number){
    if (number < 0){
        if (number - abs((int)number) < 0){
            return (number);
        }
        return (number - 0.5);
    }
    return (number + 1.0);
}

void printResult(float  number){
    cout << "My ceil is : " << MyCeil(number) << endl;
    cout << "C++ ceil is : " << ceil(number) << endl;
}

int main(){
    printResult(readnumber());
    return 0;
}