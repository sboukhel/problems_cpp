#include <iostream>
using namespace std;

int readnumber(void){
    int number;
    cout << "enter your number :" << endl;
    cin >> number;
    return number;
}

void fandUnitsnumber(int number){
    while(number > 0){
        cout << number % 10 << endl;
        number /= 10;
    }
}

void    printanswer(void){
    cout << "the reverse of your number is :" << endl;
    fandUnitsnumber(readnumber());
    cout << "this programme finich" << endl;
}

int main(){
    printanswer();
    return 0;
}