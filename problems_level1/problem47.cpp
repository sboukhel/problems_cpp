#include <iostream>
#include <cmath>
using namespace std;

float readnumber(void){
    float number;
    cout << "enter number :" << endl;
    cin >> number;
    return number;
}

int MyRound(float number){
    if (number < 0)
        return (number - 0.5);
    return (number + 0.5);
}

void printResult(float  number){
    cout << "My round is : " << MyRound(number) << endl;
    cout << "C++ round is : " << round(number) << endl;
}

int main(){
    printResult(readnumber());
    return 0;
}