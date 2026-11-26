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

short   sparceMatrix(vector<vector<short>> array){
    short sum = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (array[i][j] == 0)
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
    cout << "matrix :" << endl;
    printFullArray(array);
    short sum1 = sparceMatrix(array);
    string result = (sum1 >= 5)? "yes : matrix is sparce." : "no : matrix are not sparce.";
    cout << result << endl;
}

int main(){
    srand((unsigned)time(NULL));
    startprogramme();
    return 0;
}