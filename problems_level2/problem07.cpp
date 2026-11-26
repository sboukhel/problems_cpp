#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

short RandomFunction(short from, short to){
    return (rand() % (to - from + 1) + from);
}

vector<vector<short>> creatArrayOrdered(void){
    vector<vector<short>> array(3, vector<short> (3));
    short order = 1;
    for(short i = 0; i < 3; i++){
        for(short j = 0; j < 3; j++){
            array[i][j] = RandomFunction(1, 10);
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
    return array;
}

vector<vector<short>>    ProductArray(vector<vector<short>> array1, vector<vector<short>> array2){
    vector<vector<short>> result(3, vector<short> (3));
    for(short i = 0; i < 3; i++){
        for (short j = 0; j < 3; j++){
            result[i][j] = array1[i][j] * array2[i][j];
        }
    }
    return result;
}

void    printArray(vector<vector<short>> array){
    cout << "result :" << endl;
    for(short i = 0; i < 3; i++){
        for (short j = 0; j < 3; j++){
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
}

int main(){
    srand((unsigned)time(NULL));
    cout << "array1 : " << endl;
    vector<vector<short>> array1 = creatArrayOrdered();
    cout << "array2 : " << endl;
    vector<vector<short>> array2 = creatArrayOrdered();
    printArray(ProductArray(array1, array2));
    return 0;
}