#include <iostream>
using namespace std;

void readarray(short number, int *array){
    cout << "enter array elements : " << endl;
    for(int i = 0; i < number; i++){
        cout << "array[" << i + 1 << "] = ";
        cin >> array[i];
    }
}

int readnumberwanttocheck(void){
    int number;
    cout << "enter your number want to check : " << endl;
    cin >> number;
    return number;
}

int checknumberinarray(int *array, int numebrcheck, short lenght){
    short repeated = 0;
    for(int i = 0; i < lenght; i++){
        if (numebrcheck == array[i]){
            repeated++;
        }
    }
    return repeated;
}

void printresult(void){
    short number;
    cout <<"enter the lenght of array :";
    cin >> number;
    int array[number];
    readarray(number, array);
    short check = readnumberwanttocheck();
    cout << endl;
    cout << "origenal array is :" ;
    for(int i = 0; i < number; i++){
        cout << " " << array[i];
    }
    cout << "\n" << check << " is repeated " << checknumberinarray(array, check, number) << " time(s)";
}

int main(){
    printresult();
    return 0;
}