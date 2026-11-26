#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;

int readnumber(string message){
    int number;
    cout << message << endl;
    cin >> number;
    return number;
}

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

short   checknumberinMatrix(vector<vector<short>> array, short number){
    short sum = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (number == array[i][j])
                sum += 1;
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
    vector<vector<short>> array = FullArray();
    short number = readnumber("enter a number want to search :");
    short result = checknumberinMatrix(array, number);
    cout << "matrix :" << endl;
    printFullArray(array);
    cout << "your number count in matrix is :" << result <<  endl;
}

int main(){
    srand((unsigned)time(NULL));
    startprogramme();
    return 0;
}