#include <iostream>
using namespace std;

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
    return 0;
}
int main(){
    char Char = readchar("enter your character to prosses :");
    cout << "the convert of your char is : " << convertchar(Char) << endl;
    return 0;
}