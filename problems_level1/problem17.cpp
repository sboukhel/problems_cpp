#include <iostream>
using namespace std;

string  readletter(void){
    string letter = "AAA";
    cout << "enter your passworde :" << endl;
    cin >> letter;
    return letter;
}

void printletters(string letter){
    int trials = 1;
    for (char i = 'A'; i <= 'Z'; i++){
        for(char j = 'A'; j <= 'Z'; j++){
            for(char k = 'A'; k <= 'Z'; k++){
                if (letter[0] == i && letter[1] == j && letter[2] == k){
                    cout << "passwrde is " << letter << endl;
                    cout << "fand after " << trials << " trial(s)" << endl;
                    cout << "________________\n" << endl;
                    return;
                }
                else
                    trials++;
            }
        }
    }
}

int main(){
    printletters(readletter());
    return 0;
} 