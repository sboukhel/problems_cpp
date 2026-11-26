#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

struct info{
    string accountnumber;
    string name;
    string pincode;
    string phone;
    double salire;
};

string readaccountnumber(string messages){
    cout << messages << endl;
    string str;
    getline(cin, str);
    return str;
}

string split(string file, int linenumber){
    fstream infile(file, ios::in);
    string information;
    string line;
    int pos = 0;
    if(!infile.is_open())
        return "this file is not define...";
    while(getline(infile, line)){
        if (linenumber == pos){
            infile.close();
            return line;
        }
        pos++;
    }
    infile.close();
    return "this line not define...";
}

vector<string> prossesstring(string data, string flag = "#//#"){
    vector<string> information;
    int pos = 0;
    while((pos = data.find(flag)) != -1){
        information.push_back(data.substr(0, pos));
        data.erase(0, pos + flag.length());
    }
    if (!data.empty()){
        information.push_back(data);
    }
    return information;
}

int sizeline(string file){
    fstream infile(file, ios::in);
    int size = 0;
    string line;
    while(getline(infile, line)){
        size++;
    }
    return size;
}

info    prossesinfo(vector<string> data){
    info information;
    information.accountnumber = data[0];
    information.name = data[1];
    information.pincode = data[2];
    information.phone = data[3];
    information.salire = stod(data[4]);
    return information;
}

info savedata(string data, string accountfind){
    vector<info> information;
    for(int i = 0; i < sizeline(data); i++){
        information.push_back(prossesinfo(prossesstring(split("info.txt", i))));
        if (information[i].accountnumber == accountfind){
            return information[i];
        }
    }
    info fail = {"\0"};
    return fail;
}

void printbanner(info information, string accountnumber){
    if (information.accountnumber == "")
        cout << "client with account number {" << accountnumber << "} not found .?";
    if (information.accountnumber == accountnumber){
        cout << "the following are client details : " << endl;
        cout << "account number : " << information.accountnumber << endl;
        cout << "name of client : " << information.name << endl;
        cout << "pincode of client : " << information.pincode << endl;
        cout << "phone of client : " << information.phone << endl;
        cout << "salire of client : " << information.salire << endl;
    }
}

int main(){
    string accountnumber = readaccountnumber("enter your account number : ");
    printbanner(savedata("info.txt", accountnumber), accountnumber);
    return 0;
}