#include <iostream>
using namespace std;

int readnumber(void){
    int number;
    cout << "enter your number : " << endl;
    cin >> number;
    return number;
}

void printpatterm(int number){
    cout << "the patterm of your number is : " << endl;
    for(int i = 1; i <= number; i++){
        for(int check = 1; check <= i; check++){
            cout << i;
        }
        cout << endl;
    }
}

int main(){
    printpatterm(readnumber());
    return 0;
}