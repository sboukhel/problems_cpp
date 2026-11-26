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
            array[i][j] = randomFunction(0, 1);
        }
    }
    return array;
}

bool   identityMatrix(vector<vector<short>> array){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (i == j && array[i][j] != 1)
                return false;
            else if (i != j && array[i][j] != 0)
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
    vector<vector<short>> array = FullArray();
    cout << "matrix :" << endl;
    printFullArray(array);
    short sum1 = identityMatrix(array);
    string result = (sum1 != 0)? "yes : matrix are identity." : "no : matrix are not identity.";
    cout << result << endl;
}

int main(){
    srand((unsigned)time(NULL));
    startprogramme();
    return 0;
}