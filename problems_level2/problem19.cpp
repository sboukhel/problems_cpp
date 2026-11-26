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

bool   checkispalendrome(vector<vector<short>> array){

    for (short i = 0; i < 3; i++)
    {    
        short end = 2;
        short start = 0;
        while (start <= end){
            if (array[i][start] != array[i][end]){
                return false;
            }
            else{
                start++;
                end--;
            }
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
    string result = (checkispalendrome(array))? "yes : matrix is palendrome." : "no : matrix is not palendrome.";
    cout << "matrix :" << endl;
    printFullArray(array);
    cout << result <<  endl;
}

int main(){
    srand((unsigned)time(NULL));
    startprogramme();
    return 0;
}