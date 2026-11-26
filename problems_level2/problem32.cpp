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

int    fandOnerOfString(string Str){
    int count = 0;
    for (int i = 0; Str[i]; i++){
        if (isVowel(Str[i]))
            count++;
    }
    return count;
}

int    main(){
    string str = readstring("enter your string : ");
    cout << "number of vowel is : " << fandOnerOfString(str) << endl;
    return 0;
}