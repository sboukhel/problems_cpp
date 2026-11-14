#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int readnumber(void){
    short number;
    cout << "enter lenght of your array from 1 to 100 :" << endl;
    cin >> number;
    return number;
}

int randomfunction(int from, int to){
    return (rand() % (from - to + 1) + from);
}

void    sumofarray1andarray2elements(int *array1, int *array2, int lenght){
    cout << "elements of array 1 + array 2 : ";
    for(int i = 0; i < lenght; i++){
        cout << array1[i] + array2[i];
        if(i < lenght - 1){
            cout << " , ";
        }
    }
    cout << endl;
}

void    fillarray1inrandom(int *array1, int lenght){
    cout << "elements of array 1 : ";
    for(int i = 0; i < lenght; i++){
        array1[i] = randomfunction(1, 100);
        cout << array1[i];
        if(i < lenght - 1){
            cout << " , ";
        }
    }
    cout << endl;
}

void    fillarray2inrandom(int *array2, int lenght){
    cout << "element of array 2: ";
    for (int i = 0; i < lenght; i++){
        array2[i] = randomfunction(1, 100);
        cout << array2[i];
        if (i < lenght - 1){
            cout << " , ";
        }
    }
    cout << endl;
}

void fullproject(int number){
    int array1[number];
    int array2[number];
    fillarray1inrandom(array1, number);
    fillarray2inrandom(array2, number);
    sumofarray1andarray2elements(array1, array2, number);
}

int main(){
    srand((unsigned)time(NULL));
    fullproject(readnumber());
    return 0;
}