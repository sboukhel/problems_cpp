#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int readnumberofkey(void){
    int number;
    cout << "enter your number of key : " << endl;
    cin >> number;
    return number;
}

char randomfuction(char from, char to){
    char letter = rand() % (to - from + 1) + from;
    return letter;
}

void    creatkeys(void){
    for (int i = 1; i <= 4; i++){
        for(int j = 1; j <= 4; j++){
            cout << randomfuction('A', 'Z');
        }
        if (i < 4){
            cout << '-';
        }
    }
}

void    printkeys(int number){
    cout << "there are your keys : " << endl;
    for(int i = 1; i <= number; i++){
        cout << "key [" << i << "] : ";
        creatkeys();
        cout << endl;
    }
}

int main(){
    srand((unsigned)time(NULL));
    printkeys(readnumberofkey());
    return 0;
}