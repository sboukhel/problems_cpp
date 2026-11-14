#include <iostream>
using namespace std;

string  readstring(void){
    string letter;
    cout << "enter your name :" << endl;
    cin >> letter;
    return letter;
}

string  cheferstring(string letter){
    for (int i = 0; letter[i]; i++){
        letter[i] += 2;
    }
    return letter;
}

string  normalstring(string letter){
    for (int i = 0; letter[i]; i++){
        letter[i] -= 2;
    }
    return letter;
}

void printcheferstring(string letter){
    letter = cheferstring(letter);
    cout << "text after excryption : " << letter << endl;
    letter = normalstring(letter);
    cout << "text after decryption : " << letter << endl;
}

int main(){
    printcheferstring(readstring());
    return 0;
}