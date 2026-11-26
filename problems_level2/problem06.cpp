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

vector<vector<short>> creatArraytransposed(void){
    vector<vector<short>> array(3, vector<short> (3));
    short order = 1;
    for(short i = 0; i < 3; i++){
        for(short j = 0; j < 3; j++){
            array[j][i] = order++;
        }
    }
    return array;
}

void    printArray(vector<vector<short>> array){
    for(short i = 0; i < 3; i++){
        for (short j = 0; j < 3; j++){
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
}

int main(){
    cout << "the following is 3x3 by order matrix : " << endl;
    printArray(creatArrayOrdered());
    cout << "\n\nthe following is the transposed matrix : " << endl;
    printArray(creatArraytransposed());
    return 0;
}