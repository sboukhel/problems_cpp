#include <iostream>
using namespace std;

string readstring(string message){
    cout << message << endl;
    string Str;
    getline(cin, Str);
    return Str;
}

int    smallString(string Str){
    int small = 0;
    for (int i = 0; Str[i]; i++){
        if (Str[i] >= 'a' && Str[i] <= 'z')
            small++;
    }
    return small;
}

int    capitalString(string Str){
    int capital = 0;
    for (int i = 0; Str[i]; i++){
        if (Str[i] >= 'A' && Str[i] <= 'Z'){
            capital++;
        }
    }
    return capital;
}


int main(){
    string str = readstring("enter your string to prosses :");
    cout << "capital string is : " << capitalString(str) << endl;
    cout << "small string is : " << smallString(str) << endl;
    return 0;
}