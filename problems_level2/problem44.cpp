#include <iostream>
#include <iomanip>
using namespace std;

struct info{
    string accantNumber;
    string pincode;
    string nume;
    string numero;
    double salire;
};

info    readinfo(string massage){
    cout << massage << endl;
    info information;
    cout << "account number : ";
    getline(cin, information.accantNumber);
    cout << "pincode : ";
    getline(cin, information.pincode);
    cout << "nume : ";
    getline(cin, information.nume);
    cout << "number phone : ";
    getline(cin, information.numero);
    cout << "salire : ";
    cout << fixed << setprecision(5);
    cin >> information.salire;
    return information;
}

void    printinfo(info information, string superatur){
    cout << "your information Acount is : ";
    cout << information.accantNumber << superatur << information.nume << superatur << information.pincode << superatur << information.numero << superatur << information.salire << endl;
}

int main(){
    info information = readinfo("enter your informations : ");
    printinfo(information, "//");
    return 0;
}