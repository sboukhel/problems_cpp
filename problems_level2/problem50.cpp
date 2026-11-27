#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <limits>
using namespace std;

struct info{
    string account;
    string name;
    string pincode;
    string phone;
    long double salire;
};

info    readinfo(string message, string accountnumber){
    cout << message << endl;
    info information;
    information.account = accountnumber;
    cout << "name : ";
    getline(cin, information.name);
    cout << "pincode : ";
    getline(cin, information.pincode); 
    cout << "phone : ";
    getline(cin, information.phone);
    cout << "salir : ";
    cin >> information.salire;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return information;
}

string readUser(string messages){
    cout << messages << endl;
    string result;
    cin >> result;
    return result;
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

vector<string> convertLineToString(string line, string flag = "#//#"){
    vector<string> information;
    int pos = 0;
    while((pos = line.find(flag)) != -1){
        information.push_back(line.substr(0, pos));
        line.erase(0, pos + flag.length());
    }
    if (!line.empty()){
        information.push_back(line);
    }
    return information;
}

int sizeLine(string file){
    ifstream infile(file);
    int size = 0;
    string line;
    while(getline(infile, line)){
        size++;
    }
    return size;
}

string updateInfo(info update){
    string line = "";
    line += update.account + "#//#";
    line += update.name + "#//#";
    line += update.pincode + "#//#";
    line += update.phone + "#//#";
    line += to_string(update.salire);
    return line;
}

vector<string> convertInfoToLine(vector<info> information, info update, string accountnumber){
    vector<string> lines;
    for(int i = 0; i < information.size(); i++){
        string str = "";
        if (information[i].account == accountnumber){
            update.account = accountnumber;
            str = updateInfo(update);
        }
        else if(information[i].account != accountnumber){
            str += information[i].account + "#//#";
            str += information[i].name + "#//#";
            str += information[i].pincode + "#//#";
            str += information[i].phone + "#//#";
            str += to_string(information[i].salire);
            
        }
        lines.push_back(str);
    }
    return lines;
}

vector<info> convertStringToInfo(string filename){
    ifstream infile(filename);
    vector<info> line;
    int index = 0;
    for (int i = 0; i < sizeLine(filename); i++){
        vector<string> information = convertLineToString(split(filename, i));
        info client;
        client.account = information[index++];
        client.name = information[index++];
        client.pincode = information[index++];
        client.phone = information[index++];
        client.salire = stold(information[index++]);
        line.push_back(client);
        index = 0;
    }
    return line;
}

int indexOfAccountFound(vector<info> &information, string accountnumber){
    for(int i = 0; i < information.size(); i++){
        if (information[i].account == accountnumber){
            return i;
        }
    }
    return -1;
}

void saveNewFile(vector<info> information, string filename, string accountnumber, info update){
    fstream file(filename, ios::out);
    if (!file.is_open()){
        cout << "htis prosses is fail...";
        return;
    }
    vector <string> lines = convertInfoToLine(information, update, accountnumber);
    for(string &line : lines){
        file << line << endl;
    }
    file.close();
    cout << "this prosses is success" << endl;
}

void printBanner(vector<info> &information, string accountnumber, int index){
    if (information[index].account == accountnumber){
        cout << "the following are client details : " << endl;
        cout << "account number : " << information[index].account << endl;
        cout << "name of client : " << information[index].name << endl;
        cout << "pincode of client : " << information[index].pincode << endl;
        cout << "phone of client : " << information[index].phone << endl;
        cout << "salire of client : " << information[index].salire << endl;
    }
}

int main(){
    char reponce = 'n';
    string accountnumber = readUser("enter your account number please :");
    vector<info> information = convertStringToInfo("info.txt");
    int linenumber = indexOfAccountFound(information, accountnumber);
    if (linenumber != -1){
        printBanner(information, accountnumber, linenumber);
        cout << "do you want to update this account :" << endl;
        cin >> reponce;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if(towlower(reponce) == 'y'){
            info line = readinfo("enter your information for update : ", accountnumber);
            saveNewFile(information,  "info.txt", accountnumber, line);
        }
    }
    if (linenumber == -1)
        cout << "client with account number {" << accountnumber << "} not found .?";
    return 0;
}