#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>
using namespace std;

struct info{
    string accountnumber;
    string name;
    string pincode;
    string phone;
    double salire;
};

string  readfile(string file, int linenumber){
    fstream infile(file, ios::in);
    if(infile.is_open()){
        int posetion = 0;
        string line;
        while(getline(infile, line)){
            if (posetion == linenumber){
                infile.close();
                return line;
            }
            posetion++;
        }
    }
    infile.close();
    return "error : The file has fewer lines than the required number.";
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

vector<string> split(string info, string CHar){
    vector<string> information;
    int index = 0;
    int pos;
    while((pos = info.find(CHar)) != -1){
        information.push_back(info.substr(0, pos));
        info.erase(0, pos + CHar.length());
    }
    if (!info.empty())
        information.push_back(info);
    return information;
}

void printbanner(void){
    cout << "\n\t\t\t\t\tclient List {" << sizeline("info.txt") << "} client(s)" << endl;
    cout << " _______________________________________________________________________________________________________" << endl;
    cout << left << setw(22) << "| account number"; 
    cout << left << setw(28) << "| name of clients";
    cout << left << setw(18) << "| pin code";
    cout << left << setw(16) << "| phone";
    cout << left << setw(20) << "| salire" << "|" << endl;
    cout << "|_______________________________________________________________________________________________________|" << endl;
    for (int i = 0; i < sizeline("info.txt"); i++){
        int index = 0;
        vector<string> information = split(readfile("info.txt", i), "#//#");
        cout << left << "| " << setw(20) << information[index++];
        cout << left << "| " << setw(26) << information[index++];
        cout << left << "| " << setw(16) << information[index++];
        cout << left << "| " << setw(14) << information[index++];
        cout << left << "| " << setw(18) << information[index] << "|" << endl;
    }
    cout << "|_______________________________________________________________________________________________________|" << endl;
}

int main(){
    printbanner();
    return 0;
}