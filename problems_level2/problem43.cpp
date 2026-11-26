#include <iostream>
using namespace std;

string readstring(string message){
    string str;
    cout << message << endl;
    getline(cin , str);
    return str;
}

string checkpunctuation(string str){
    string result = "";
    for (int i = 0; str[i]; i++){
        if ((str[i] == 32) || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9')){
            result += str[i];
        }
    }
    return result;
}

int main(){
    string str = readstring("enter your string : ");
    cout << checkpunctuation(str) << endl;
    return 0;
}