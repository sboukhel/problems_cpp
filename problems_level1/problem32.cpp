#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

short readnumber(void){
    short number;
    cout << "enter lenght of your array from 1 to 100 :" << endl;
    cin >> number;
    return number;
}

int randomfunction(int from, int to){
    return (rand() % (from - to + 1) + from);
}

void swaped(int &index1, int &index2){
    int tmp = index1;
    index1 = index2;
    index2 = tmp;
}

void    printarrayswaped(int *array, short number){
    cout << "array elements after reverse order : ";
    int array1[number];
    for (int i = 0; i < number; i++) { 
        array1[i] = array[i];
        cout << array1[i];
        if (i < number - 1) { 
            cout << ", "; 
        } 
    }
    cout << endl;
}

void    swaparray(int *array, short number){
    int lenght = number;
    for (int i = 0; i < number; i++){
        swaped(array[i], array[number -1]);
        number--;
    }
    printarrayswaped(array, lenght);
}

void printarraycontinte(short number) {
    cout << "array elements : "; 
    int array[number];
    for (int i = 0; i < number; i++) { 
        array[i] = randomfunction(1, 100);
        cout << array[i];
        if (i < number - 1) { 
            cout << ", "; 
        } 
    }
    cout << endl;
    swaparray(array, number);
}

int main(){
    srand((unsigned)time(NULL));
    printarraycontinte(readnumber());
    return 0;
}