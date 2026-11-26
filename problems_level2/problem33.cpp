#include <iostream>
#include <cctype>
using namespace std;

string readstring(string message){
    cout << message << endl;
    string str;
    getline(cin, str);
    return str;
}

bool isVowel(char Char){
    string vowel = "aoiue";
    for (int i = 0; vowel[i]; i++){
        if (tolower(Char) == vowel[i])
            return true;
    }
    return false;
}

void    fandOnerOfString(string Str){
    for (int i = 0; Str[i]; i++){
        if (isVowel(Str[i]))
            cout << Str[i] << " ";
    }
    cout << endl;
}

int    main(){
    string str = readstring("enter your string : ");
    cout << "number of vowel is : ";
    fandOnerOfString(str);
    return 0;
}