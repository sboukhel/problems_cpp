#include <iostream>
using namespace std;

int readnumber(string message){
    int number;
    cout << message << endl;
    cin >> number;
    return number;
}

int fandfrequencynumber(int &number, int &digit){
    int frequency = 0;
    while(number > 0){
        if (digit == number % 10){
            frequency++;
        }
        number /= 10;
    }
    cout << "your digit frequency is :";
    return frequency;
}

void    printanswer(void){
    int number = readnumber("enter your number : ");
    int digit = readnumber("enter your digit fand : ");
    cout << fandfrequencynumber(number, digit) << endl;
}

int main(){
    printanswer();
    return 0;
}