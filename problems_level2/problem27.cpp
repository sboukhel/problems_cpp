#include <iostream>
using namespace std;

string readstring(string message){
    cout << message << endl;
    string str;
    getline(cin, str);
    return str;
}

char    convertchar(char Char){
    if (Char >= 'A' && Char <= 'Z'){
        Char += 32;
        return Char;
    }
    if (Char >= 'a' && Char <= 'z'){
        Char -= 32;
        return Char;
    }
    return Char;
}

string    fandOnerOfString(string Str){
    for (int i = 0; Str[i]; i++){
        Str[i] = convertchar(Str[i]);
    }
    return Str;
}

int main(){
    string str = readstring("enter your character to prosses :");
    cout << "the convert of your char is : " << fandOnerOfString(str) << endl;
    return 0;
}