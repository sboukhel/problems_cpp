#include <iostream>
using namespace std;

void printletters(void){
    for (char i = 'A'; i <= 'Z'; i++){
        for(char j = 'A'; j <= 'Z'; j++){
            for(char k = 'A'; k <= 'Z'; k++){
                cout << i << j << k << endl;
            }
        }
    }
    cout << "________________\n" << endl;
}

int main(){
    printletters();
    return 0;
}