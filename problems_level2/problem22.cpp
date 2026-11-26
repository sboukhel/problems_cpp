#include <iostream>
using namespace std;

string readstring(string message){
    cout << message << endl;
    string Str;
    getline(cin, Str);
    return Str;
}

void    fandOnerOfString(string Str){
    for (int i = 0; Str[i]; i++){
        if (i == 0 || Str[i - 1] == 32){
            cout << Str[i] << endl;
        }
    }
}

int main(){
    string str = readstring("enter your string to prosses :");
    fandOnerOfString(str);
    return 0;
}