#include <iostream>
#include <cctype>
using namespace std;
char    readchar(string message){
    cout << message << endl;
    char Char;
    cin >> Char;
    return Char;
}

bool isVowel(char Char){
    string vowel = "aoiue";
    for (int i = 0; vowel[i]; i++){
        if (tolower(Char) == vowel[i])
            return true;
    }
    return false;
}

int    main(){
    char CHar = readchar("enter your char : ");
    string result = (isVowel(CHar)? "yes this char is vowel." : "no this char is vowel.");
    cout << result << endl;
    return 0;
}