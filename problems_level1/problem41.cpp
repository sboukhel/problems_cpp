#include <iostream>
using namespace std;

int ReadNumber(void){
    cout << "enter lenght of your array :";
    int number;
    cin >> number;
    return number;
}

void    readArray(int *array, int number){
    cout << "enter elements of your array :" << endl;
    for (int i = 0; i < number; i++){
        cout << "array[" << i << "] = ";
        cin >> array[i];
    }
}

bool    checkArrayIsPalindrome(int *array, int number){
    for (int i = 0; i < number / 2; i++){
        if (array[i] != array[number - 1 - i]){
            return 0;
        }
    }
    return 1;
}

void    printResult(int *array, int number){
    if (checkArrayIsPalindrome(array, number)){
        cout << "yes, this array is palindrome." << endl;
    }
    else
        cout << "no , this array is not palindrome." << endl;
}

int main(){
    int lenght = ReadNumber();
    int array[lenght];
    readArray(array, lenght);
    printResult(array, lenght);
    return 0;
}