#include <iostream>
using namespace std;

int readnumber(string message){
    int number;
    cout << message << endl;
    cin >> number;
    return number;
}

int fibonacci(int number){
    int serie1 = 0;
    int serie2 = 1;
    int index;
    if (number == 0 || number == 1)
        return index;
    for (int i = 2; i <= number; i++){
        index = serie1 + serie2;
        serie1 = serie2;
        serie2 = index;
    }
    return index;
}

int main(){
    int number = readnumber("enter your number : ");
    cout << "your fibonacci of number is : " << fibonacci(number) << endl;
    return 0;
}
