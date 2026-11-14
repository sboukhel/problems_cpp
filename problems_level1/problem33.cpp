#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int readlenghtofarray(void){
    int lenght;
    cout << "enter lenght of your array : ";
    cin >> lenght;
    return lenght;
}

char    randomfunction(char from, char to){
    return(rand() % (to - from + 1) + from);
}

string  fullstringofarrayonrandomkeys(void){
    string stringofarray = "";
    int index = 0;
    for(int i = 1; i <= 4; i++){
        for(int j = 1; j <= 4; j++){
            stringofarray += randomfunction('A', 'Z');
        }
        if (i < 4){
            stringofarray += '-';
        }
    }
    return stringofarray;
}

void fullarrayofstring(string *array, int lenght){
    for(int i = 0; i < lenght; i++){
        array[i] = fullstringofarrayonrandomkeys();
    }
}

void    printarray(int lenght){
    cout << "array elements :" << endl;
    string array[lenght];
    fullarrayofstring(array, lenght);
    for (int i = 0; i < lenght; i++){
        cout << "array[" << i << "] = ";
        cout << array[i] << endl;
    }
}

int main(){
    srand((unsigned)time(NULL));
    printarray(readlenghtofarray());
    return 0;
}