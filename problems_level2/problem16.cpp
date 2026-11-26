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

void startprogramme(void){
    vector<vector<short>> array = FullArray();
    short number = readnumber("enter a number want to search :");
    string result = (checknumberinMatrix(array, number) != 0) ? "yes : it is there." : "no : it is not there.";
    cout << "matrix :" << endl;
    printFullArray(array);
    cout << result << endl;
}

int main(){
    srand((unsigned)time(NULL));
    startprogramme();
    return 0;
}