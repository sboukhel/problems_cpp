#include <iostream>
using namespace std;

int readnumber(void){
    int number;
    cout << "enter your number : " << endl;
    cin >> number;
    return number;
}

char    covertnumbertoletter(int number){
    char letter = 'A';
    letter += number - 1;
    return letter;
}

void printinvertedpatterm(char letter){
    cout << "the inverted patterm of your number to letter is : " << endl;
    for (char i = 'A'; i <= letter; i++){
        for(int j = 'A'; j <= i; j++){
            cout << i;
        }
        cout << endl;
    }
}

int main(){
    printinvertedpatterm(covertnumbertoletter(readnumber()));
    return 0;
}