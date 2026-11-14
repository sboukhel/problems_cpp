#include <iostream>
#include <cmath>
using namespace std;

int readnumber(void){
    short number;
    cout << "enter a number :" << endl;
    cin >> number;
    return number;
}

int MyABS(int number){
    if (number < 0){
        return (-number);
    }
    else
        return number;
}

void printResult(int number){
    cout << "My abs is : " << MyABS(number) << endl;
    cout << "C++ abs is : " << abs(number) << endl;
}

int main(){
    printResult(readnumber());
    return 0;
}