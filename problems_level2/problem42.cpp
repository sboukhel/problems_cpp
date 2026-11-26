#include <iostream>
#include <vector>
using namespace std;

string readstring(string message){
    cout << message << endl;
    string str;
    getline(cin, str);
    return str;
}

vector<string>    splitstring(string Str, string world, string reworld, string Char){
    
    int pos = 0;
    vector<string> vstring;
    string sworld;
    while ((pos = Str.find(Char)) != -1){
        sworld = Str.substr(0, pos);
        if (sworld != ""){
            if (sworld == world)
                sworld = reworld;
            vstring.push_back(sworld);
        }
        Str.erase(0, pos + Char.length());
    }
    if (Str != ""){
        vstring.push_back(Str);
    }
    return vstring;
}

string strjoin(vector<string> vstring, char Char){
    string total = "";
    int k = 0;
    for (int i = 0; i < vstring.size(); i++){
        total += vstring[i];
        if (i < total.size() - 1)
            total += Char;
    }
    return total;
}

void    printstring(string vstring){
    for (int i = 0; i < vstring.size(); i++){
        cout << vstring[i];
    }
}

int    main(){
    string str = readstring("enter your string : ");
    string vstring = strjoin(splitstring(str,"sabir", "ali", " "), ' ');
    printstring(vstring);
    return 0;
}