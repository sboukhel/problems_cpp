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

short    creatarray(int *array, short number){
    short positive = 0;
    for (int i = 0; i < number; i++) { 
        array[i] = randomfunction(-100, 100);
        if (array[i] >= 0){
            positive++;
        }
    }
    return positive;
}

void printarraycontinte(short number) {
    cout << "array elements : "; 
    int array[number];
    short positive = creatarray(array, number);
    for (int i = 0; i < number; i++) { 
        cout << array[i];
        if (i < number - 1) { 
            cout << ", "; 
        } 
    }
    cout << "\nnumber of positive number in array is : " << positive <<endl;
}

int main(){
    srand((unsigned)time(NULL));
    printarraycontinte(readnumber());
    return 0;
}