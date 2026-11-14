#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int readnumber(void){
    int number;
    cin >> number;
    return number;
}

int randomfuncton(int from, int to){
    return (rand() % (to - from + 1) + from);
}

void creatarray(int *array, int number){
    cout << "array elements : " << endl;
    for (int i = 0; i < number ; i++){
        array[i] = randomfuncton(1, 100);
        cout << array[i];
        if (i < number - 1)
            cout << " , ";
    }
    cout << endl;
}

void    checknumber(int *array, int number, int checked){
    cout << "number you are looking for is : " << checked << endl;
    for (int i = 0; i < number; i++){
        if (array[i] == checked){
            cout << "yes, number is found : -)" << endl;;
            return ;
        }
    }
    cout << "no, number is not found : -(" << endl;
    return ;
}

void    printanswer(void){
    cout << "enter the lenght of array : " << endl;
    int lenght = readnumber();
    int array[lenght];
    creatarray(array, lenght);
    cout << "enter number to search for ? : ";
    int checked = readnumber();
    checknumber(array, lenght, checked);
}

int main(){
    srand((unsigned)time(NULL));
    printanswer();
    return 0;
}