#include <iostream>
#include <vector>
using namespace std;

string readstring(string message){
    cout << message << endl;
    string str;
    getline(cin, str);
    return str;
}

vector<string>    splitstring(string Str, string Char){
    
    int pos = 0;
    vector<string> vstring;
    string sworld;
    while ((pos = Str.find(Char)) != -1){
        sworld = Str.substr(0, pos);
        if (sworld != ""){
            vstring.push_back(sworld);
        }
        Str.erase(0, pos + Char.length());
    }
    if (Str != ""){
        vstring.push_back(Str);
    }
    return vstring;
}

void    printstring(vector<string> vstring){
    for (int i = 0; i < vstring.size(); i++){
        for (int j = 0; j < vstring[i].size(); j++){
            cout << vstring[i][j];
        }
        cout << endl;
    }
}

int    main(){
    string str = readstring("enter your string : ");
    vector<string> vstring = splitstring(str, " ");
    cout << "number of token is : " << vstring.size() << endl;
    printstring(vstring);
    return 0;
}