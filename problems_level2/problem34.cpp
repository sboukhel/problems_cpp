#include <iostream>
using namespace std;

string readstring(string message){
    cout << message << endl;
    string str;
    getline(cin, str);
    return str;
}

void    fandworldinstring(string Str){
    for (int i = 0; Str[i]; i++){
        if (Str[i] == ' ')
            Str[i] = '\n';
        cout << Str[i];
    }
    cout << endl;
}

int    main(){
    string str = readstring("enter your string : ");
    cout << "your string worlds is : " << endl;
    fandworldinstring(str);
    return 0;
}