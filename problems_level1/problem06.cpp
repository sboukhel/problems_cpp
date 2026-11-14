#include <iostream>
using namespace std;

int readnumber(void){
    int number;
    cout << "enter your number :" << endl;
    cin >> number;
    return number;
}

int fandUnitsnumber(int &number){
    int sum = 0;
    while(number > 0){
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

void    printanswer(void){
    int number = readnumber();
    cout << "the sum of your number units is : " << endl;
    cout << fandUnitsnumber(number) << endl;
}

int main(){
    printanswer();
    return 0;
}