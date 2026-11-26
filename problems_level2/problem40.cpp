#include <iostream>
using namespace std;

string readstring(string message){
    cout << message << endl;
    string count;
    getline(cin , count);
    return count;
}

string reversestring(string str){
    string result = "";
    int pos = str.size();
    for (int i = str.size() - 1; i >= 0; i--){
        if (str[i] == ' ' || i == 0){
            if (i == 0)
                i = i - 1;
            int index = i + 1;
            result += str.substr(index, pos);
            result += ' ';
            pos = i;
        }
    }
    return result;
}

int main(){
    string str = readstring("enter your string : ");
    cout << "the reverse of your string is : " << reversestring(str) << endl;
    return 0;
}