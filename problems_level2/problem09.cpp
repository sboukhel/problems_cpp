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

short   sumMatrix(vector<vector<short>> array){
    short sum = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            sum += array[i][j];
        }
    }
    return sum;
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
    short sum = sumMatrix(array);
    cout << "full matrix is : " << endl;
    printFullArray(array);
    cout << "sum of matrix elements is : " << sum << endl;
    return 0;
}