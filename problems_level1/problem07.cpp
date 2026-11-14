#include <iostream>
using namespace std;

int readnumber(void){
    int number;
    cout << "enter your number :" << endl;
    cin >> number;
    return number;
}

int fandUnitsnumber(int &number){
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
    cout << "the reverse of your number units is : " << endl;
    cout << fandUnitsnumber(number) << endl;
}

int main(){
    printanswer();
    return 0;
}