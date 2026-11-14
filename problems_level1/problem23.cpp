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

void printarraycontinte(short number) {
    cout << "array elements : "; 
    for (int i = 0; i < number; i++) { 
        cout << randomfunction(1, 100); 
        if (i < number - 1) { 
            cout << ", "; 
        } 
    }
    cout << endl;
}

int main(){
    srand((unsigned)time(NULL));
    printarraycontinte(readnumber());
    return 0;
}