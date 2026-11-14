#include <iostream>
using namespace std;

int readnumber(void){
    int number;
    cout << "enter your number : " << endl;
    cin >> number;
    return number;
}

void printinvertedpatterm(int number){
    cout << "the inverted patterm of your number is : " << endl;
    while (number > 0){
        int i = number;
        while(i > 0){
            cout << number;
            i--; 
        }
        cout << endl;
        number--;
    }
}

int main(){
    printinvertedpatterm(readnumber());
    return 0;
}