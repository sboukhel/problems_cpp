#include <iostream>
using namespace std;

string readstring(string message){
    cout << message << endl;
    string Str;
    getline(cin, Str);
    return Str;
}

void    smallString(string Str){
    for (int i = 0; Str[i]; i++){
        if (Str[i] >= 'A' && Str[i] <= 'Z'){
            Str[i] += 32;
        }
        cout << Str[i];
    }
    cout << endl;
}

void    capitalString(string Str){
    for (int i = 0; Str[i]; i++){
        if (Str[i] >= 'a' && Str[i] <= 'z'){
            Str[i] -= 32;
        }
        cout << Str[i];
    }
    cout << endl;
}


int main(){
    string str = readstring("enter your string to prosses :");
    cout << "capital string is : ";
    capitalString(str);
    cout << "small string is : ";
    smallString(str);
    return 0;
}