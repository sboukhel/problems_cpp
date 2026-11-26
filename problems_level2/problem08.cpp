#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;

short   randomFunction(int from, int to){
    return (rand() % (to - from + 1) + from);
}

vector<vector<short>> FullArray(void){
    vector<vector<short>> array(3, vector<short> (3));
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            array[i][j] = randomFunction(1, 100);
        }
    }
    return array;
}

void    printRowOfArray(vector<vector<short>> array, int rownumber){
    for (int i = 0; i < 3; i++){
        cout << array[rownumber - 1][i];
        if (i < 2)
            cout << "\t";
    }
    cout << endl;
}

void    printColOfArray(vector<vector<short>> array, int colnumber){
    for (int i = 0; i < 3; i++){
        cout << array[i][colnumber - 1];
        if (i < 2)
            cout << "\t";
    }
    cout << endl;
}

void    printFullArray(vector<vector<short>> array){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << array[i][j];
            if (j < 2)
                cout << "\t";
        }
        cout << endl;
    }
}

int main(){
    srand((unsigned)time(NULL));
    vector<vector<short>> array = FullArray();
    cout << "full matrix : " << endl;
    printFullArray(array);
    cout << "midell row of matrix is : " << endl;
    printRowOfArray(array, 2);
    cout << "midell col of matrix is : " << endl;
    printColOfArray(array, 2);
    return 0;
}