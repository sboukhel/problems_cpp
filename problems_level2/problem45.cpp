#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct info{
    string accountnumber;
    string nume;
    string pincode;
    string phone;
    double salire;
};

vector<string> split(string str, string Char){
    vector<string>  result;
    int pos;
    while ((pos = str.find(Char)) != -1){
        result.push_back(str.substr(0, pos));
        str.erase(0, pos + Char.size());
    }
    if (!str.empty())
        result.push_back(str);
    return result;
}

info saveinfo(vector<string> str){
    info information;
    information.accountnumber = str[0];
    information.nume = str[1];
    information.pincode = str[2];
    information.phone = str[3];
    information.salire = stod(str[4]);
    return information;
}

void    printresult(info information){
    cout << "account number : ";
    cout << information.accountnumber << endl;
    cout << "name : ";
    cout << information.nume << endl;
    cout << "pincode : ";
    cout << information.pincode << endl;
    cout << "phone : ";
    cout << information.phone << endl;
    cout << "salire : ";
    cout << information.salire << endl;
}

int main(){
    string str = "A123#//#sabir boukhelyf#//#1234#//#0999999999#//#30000.2400";
    string Cahr = "#//#";
    printresult(saveinfo(split(str, Cahr)));
    return 0;
}