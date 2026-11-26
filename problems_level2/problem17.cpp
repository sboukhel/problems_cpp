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
            array[i][j] = randomFunction(0, 10);
        }
    }
    return array;
}

bool   checknumberinMatrix(vector<vector<short>> array, short number){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (number == array[i][j])
            return true;
        }
    }
    return false;
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

bool checkarerepitinarray(short number, vector<short> array){
    for (int i = 0 ; i < array.size() ; i++){
        if (number == array[i]){
            return false;
        }
    }
    return true;
}

void    isintersectedarrray(vector<vector<short>> array1, vector<vector<short>> array2){
    vector<short> array;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (checknumberinMatrix(array1, array2[i][j])){
                if(checkarerepitinarray(array2[i][j], array)){
                    array.push_back(array2[i][j]);
                    cout << array2[i][j] << " ";
                }
            }
        }
    }
}

void startprogramme(void){
    vector<vector<short>> array1 = FullArray();
    vector<vector<short>> array2 = FullArray();
    cout << "matrix 1 :" << endl;
    printFullArray(array1);
    cout << "matrix 2 :" << endl;
    printFullArray(array2);
    cout << "intersected number are : ";
    isintersectedarrray(array1,array2);
}

int main(){
    srand((unsigned)time(NULL));
    startprogramme();
    return 0;
}