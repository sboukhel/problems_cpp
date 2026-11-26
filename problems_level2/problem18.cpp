#include <cstdio>
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

short   maxMatrix(vector<vector<short>> array){
    short max = array[0][0];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (max < array[i][j])
                max = array[i][j];
        }
    }
    return max;
}

short   minMatrix(vector<vector<short>> array){
    short min = array[0][0];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (min > array[i][j])
                min = array[i][j];
        }
    }
    return min;
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
    short max = maxMatrix(array);
    cout << "max of matrix is : " << max << endl;
    short min = minMatrix(array);
    cout << "min of matrix is : " << min << endl;
}

int main(){
    srand((unsigned)time(NULL));
    startprogramme();
    return 0;
}