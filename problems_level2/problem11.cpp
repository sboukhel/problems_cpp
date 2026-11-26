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
            array[i][j] = randomFunction(1, 10);
        }
    }
    return array;
}

bool   typicalMatrix(vector<vector<short>> array1, vector<vector<short>> array2){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (array1[i][j] != array2[i][j])
                return false;
        }
    }
    return true;
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

void startprogramme(void){
    vector<vector<short>> array1 = FullArray();
    cout << "matrix 1 :" << endl;
    printFullArray(array1); 
    vector<vector<short>> array2 = FullArray();
    cout << "matrix 2 :" << endl;
    printFullArray(array2);
    short sum1 = typicalMatrix(array1, array2);
    string result = (sum1 != 0)? "yes : matrix are equal." : "no : matrix are not equal.";
    cout << result << endl;
}

int main(){
    srand((unsigned)time(NULL));
    startprogramme();
    return 0;
}