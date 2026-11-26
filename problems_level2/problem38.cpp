#include <iostream>
#include <vector>
using namespace std;

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

int main(){
    vector<string> vstr = {"sabir", "boukhelyf", "student at 1337"};
    cout << strjoin(vstr, ' ') << endl;
}