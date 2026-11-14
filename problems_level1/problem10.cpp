#include <iostream>
using namespace std;

int readnumber(void){
    int number;
    cout << "enter your number :" << endl;
    cin >> number;
    return number;
}

int fandreversenumber(int &number){
    int reverse = 0;
    while(number > 0){
        reverse *= 10;
        reverse += number % 10;
        number /= 10;
    }
    return reverse;
}

void fandUnitsnumber(int number){
    while(number > 0){
        cout << number % 10 << endl;
        number /= 10;
    }
}

void    printanswer(void){
    int number = readnumber();
    number = fandreversenumber(number);
    cout << "the digit of your number units is : " << endl;
    fandUnitsnumber(number);
}

int main(){
    printanswer();
    return 0;
}