#include <iostream>
#include <cmath>
using namespace std;

float readnumber(void){
    float number;
    cout << "enter number :" << endl;
    cin >> number;
    return number;
}

float MySqrt(float number) {
    return (pow(number, 0.5));
}

void printResult(float  number){
    cout << "My sqrt is : " << MySqrt(number) << endl;
    cout << "C++ sqrt is : " << sqrt(number) << endl;
}

int main(){
    printResult(readnumber());
    return 0;
}