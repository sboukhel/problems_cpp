#include <iostream>
#include <vector>
using namespace std;

vector<vector<short>> creatArrayOrdered(void){
    vector<vector<short>> array(3, vector<short> (3));
    short order = 1;
    for(short i = 0; i < 3; i++){
        for(short j = 0; j < 3; j++){
            array[i][j] = order++;
        }
    }
    return array;
}

void    printArray(vector<vector<short>> array){
    cout << "the oreded array :" << endl;
    for(short i = 0; i < 3; i++){
        for (short j = 0; j < 3; j++){
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
}

int main(){
    printArray(creatArrayOrdered());
    return 0;
}