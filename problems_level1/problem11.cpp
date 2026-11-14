#include <iostream>
using namespace std;

int readnumber(void){
    int number;
    cout << "enter your number :" << endl;
    cin >> number;
    return number;
}

int fandreversenumber(int number){
    int reverse = 0;
    while(number > 0){
        reverse *= 10;
        reverse += number % 10;
        number /= 10;
    }
    return reverse;
}

void    printanswer(void){
    int number = readnumber();
    int reverse = fandreversenumber(number);
    if (reverse == number){
        cout << number << " is a palindrome number" << endl;
    }
    else
        cout << number << " is not a palindrome number" << endl; 
}

int main(){
    printanswer();
    return 0;
}