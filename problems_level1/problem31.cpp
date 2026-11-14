#include <iostream>
using namespace std;

int readnumber(void){
    int number;
    cout << "enter lenght of array :";
    cin >> number;
    return number;
}

int randomfunction(int from, int to){
    int number = rand() % (to - from + 1) + from;
    return number;
}

void    creatarray(int *array, int number){
    cout << "array elements befor sheffle : ";
    for (int i = 0; i < number; i++){
        array[i] = i + 1;
        cout << array[i];
        if (i < number - 1)
            cout << " , ";
    }
    cout << endl;
}

bool checknumberrandom(int *array, int numberrandom, int length) {
    for (int i = 0; i < length; i++) {
        if (array[i] == numberrandom) {
            return false; 
        }
    }
    return true; 
}

void arrayafterrandom(int *array, int number) {
    cout << "array elements after shuffle : ";
    int i = 0;
    while (i < number) {
        int numberrandom = randomfunction(1, number);
        if (checknumberrandom(array, numberrandom, i) == true) {
            array[i] = numberrandom;
            cout << array[i];
            if (i < number - 1) {
                cout << " , ";
            }
            i++;
        }
    }
    cout << endl;
}

void printarrays(void){
    int number = readnumber();
    int array[number];
    creatarray(array, number);
    arrayafterrandom(array, number);
}

int main(){
    srand((unsigned)time(NULL));
    printarrays();
    return 0;
}