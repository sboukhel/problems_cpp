#include <iostream>
using namespace std;

string readstring(string message){
    cout << message << endl;
    string str;
    getline(cin, str);
    return str;
}

int    fandworldinstring(string Str){
    int count = 0;
    for (int i = 0; Str[i]; i++){
        if (Str[i] == ' ')
            if (Str[i - 1] != ' ')
                count++;
    }
    return count + 1;
}

int    main(){
    string str = readstring("enter your string : ");
    cout << "the string worlds number is : " << fandworldinstring(str) << endl;
    return 0;
}