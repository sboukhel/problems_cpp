#include <iostream>
using namespace std;

string readstring(string message){
    cout << message << endl;
    string str;
    getline(cin, str);
    return str;
}

string traimleft(string str){
    int lenghttraim = 0;
    for (int i = 0; str[i]; i++){
        if (str[i] == ' '){
            lenghttraim++;
        }
        else
            break;
    }
    int size = str.length();
    for (int i = 0; str[i]; i++){
        if (lenghttraim < size){
            str[i] = str[lenghttraim++];
        }
        else
            str[i] = ' ';
    }
    return str;
}

string traimright(string str){
    int lenghttraim = str.size() - 1;
    for (int i = str.size() - 1; i >= 0; i--){
        if (str[i] == ' '){
            lenghttraim--;
        }
        else
            break;
    }
    for (int i = str.size() - 1; i >= 0; i--){
        if (lenghttraim >= 0){
            str[i] = str[lenghttraim--];
        }
        else
            str[i] = ' ';
    }
    str[0] = ' ';
    return str;
}

string  traim(string str){
    if (str[0] == ' '){
        return traimleft(str);
    }
    else if (str[str.size() - 1] == ' '){
        return traimright(str);
    }
    else
        return str;
}

int main(){
    string str = traim(readstring("enter your string :"));
    cout << str << endl;
    return 0;
}