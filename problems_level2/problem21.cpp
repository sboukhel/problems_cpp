#include <iostream>
using namespace std;

int readnumber(string message){
    int number;
    cout << message << endl;
    cin >> number;
    return number;
}

int fibonacci(int number){
    if (number == 0){
        return 0;
    }
    if (number == 1){
        return 1;
    }
    number = fibonacci(number - 1) + fibonacci(number - 2);
    return number;
}

int main(){
    int number = readnumber("enter your number : ");
    cout << "your fibonacci of number is : " << fibonacci(number) << endl;
    return 0;
}