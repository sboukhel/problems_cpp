#include <iostream>
using namespace std;

enum enperfict{perfect, notperfect};

int readnumber(void){
    int number;
    cout << "enter your number :" << endl;
    cin >> number;
    return number;
}

int calculsumofdivisenumber(int number){
    int sum = 0;
    for(int i = 1; i < number; i++){
        if (number % i == 0){
            sum += i;
        }
    }
    return (number - sum);
}

enperfict   checknumber(int number){
    if (number == 0){
        return enperfict::perfect;
    }
    else
        return enperfict::notperfect;
}

void printanswer(enperfict number){
    if (number == enperfict::perfect){
        cout << "your number is perfect number";
    }
    else
        cout << "your number is not a perfect number";
}

int main (){
    printanswer(checknumber(calculsumofdivisenumber(readnumber())));
    return 0;
}