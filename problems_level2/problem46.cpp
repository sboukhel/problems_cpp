#include <iostream>
#include <fstream>
#include <vector>
#include <climits>
using namespace std;

struct info{
    string accountnumber;
    string name;
    string pincode;
    string phone;
    double salire;
};

info    readinfo(string message){
    cout << message << endl;
    info information;
    cout << "account number : ";
    getline(cin, information.accountnumber);
    cout << "name : ";
    getline(cin, information.name);
    cout << "pincode : ";
    getline(cin, information.pincode);
    cout << "phone : ";
    getline(cin, information.phone);
    cout << "salir : ";
    cin >> information.salire;
    return information;
}

string saveinfo(info information){
    string str = "";
    str += information.accountnumber;
    str += "#//#";
    str += information.name;
    str += "#//#";
    str += information.pincode;
    str += "#//#";
    str += information.phone;
    str += "#//#";
    str += to_string(information.salire);
    return str;
}

void    addtofile(string str){
    fstream infofile("info.txt", ios::out | ios::app);
    if(infofile.is_open()){
        infofile << str << endl;
        infofile.close();
        cout << "File written successfully." << endl;
    }
    else
        cout << "Error: Unable to open or create the file." << endl;
}

int main(){
    char reponce = 'y';
    do{
        info information = readinfo("enter your information account : ");
        addtofile(saveinfo(information));
        cout << "do you want add new client (Y / N) : ";
        cin >> reponce;
    }while(reponce == 'y' || reponce == 'Y');
    cout << "press enter to contunie...";
    cin.ignore(INT_MAX, '\n');
    cin.get();
    return 0;
}