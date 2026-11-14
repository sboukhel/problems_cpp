#include <iostream>
using namespace std;

int  readnumber(void){
    int number;
    cout << "enter your number : " << endl;
    cin >> number;
    return number;
}

int calculsumnumber(int number){
    int sum = 0;
    for(int i = 1; i < number; i++){
        if (number % i == 0){
            sum += i;
        }
    }
    return (number - sum);
}

void printnumber(int number){
    cout << "this is a perfect numbers from 1 to " << number << endl;
    if (number > 6)
        cout << 6;
    for (int i = 7; i < number; i++){
        if (calculsumnumber(i) == 0){
            cout << " -> " << i ;
        }
    }
}

int main(){
    printnumber(readnumber());
    return 0;
}