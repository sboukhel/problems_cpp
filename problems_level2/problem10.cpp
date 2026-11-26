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

void startprogramme(void){
    vector<vector<short>> array1 = FullArray();
    cout << "matrix 1 :" << endl;
    printFullArray(array1); 
    vector<vector<short>> array2 = FullArray();
    cout << "matrix 2 :" << endl;
    printFullArray(array2);
    short sum1 = sumMatrix(array1);
    short sum2 = sumMatrix(array2);
    string result = (sum1 == sum2)? "yes : matrix are equal." : "no : matrix are not equal.";
    cout << result << endl;
}

int main(){
    srand((unsigned)time(NULL));
    startprogramme();
    return 0;
}