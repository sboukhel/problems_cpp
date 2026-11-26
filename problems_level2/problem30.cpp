#include <iostream>
using namespace std;

string readstring(string message){
    cout << message << endl;
    string str;
    getline(cin, str);
    return str;
}

char readchar(string message){
    cout << message << endl;
    char Char;
    cin >> Char;
    return Char;
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

int    fandOnerOfString(string Str, char Char){
    int count = 0;
    for (int i = 0; Str[i]; i++){
        if (Str[i] == Char)
            count++;
    }
    return count;
}

int main(){
    string str = readstring("enter your string to prosses : ");
    char Char = readchar("enter your char to fand : ");
    cout << "the count of your char is : " << fandOnerOfString(str, Char) << endl;
    cout << "the count of your char and your convert is : " << fandOnerOfString(str, Char) + fandOnerOfString(str, convertchar(Char)) << endl;
    return 0;
}