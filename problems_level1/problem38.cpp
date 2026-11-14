#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int readnumber (void){
    int number;
    cin >> number;
    return number;
}

int randomfunction(int from, int to){
    return (rand() % (to - from + 1) + from);
}

void    addnumbertoarray(int *array, int *arraycopy, int &index, int &indexcopy){
    arraycopy[indexcopy++] = array[index++];
}

void    creatrandomarray(int *array, int lenght){
    for (int i = 0; i < lenght; i++){
        array[i] = randomfunction(1, 100);
    }
}

int    creatcopyarray(int *array, int *arraycopy, int lenght){
    int indexcopy = 0;
    int index = 0;
    while (index < lenght){
        if (array[index] % 2 != 0){
            addnumbertoarray(array, arraycopy, index, indexcopy);
        }
        else
            index++;
    }
    return indexcopy;
}

void    printarray(int *array, int lenght){
    for(int i = 0; i < lenght; i++){
        cout << array[i];
        if (i < lenght - 1)
            cout << " , ";
    }
    cout << endl;
}

void    fullprograme(void){
    cout << "enter the lenght of array :";
    int lenght = readnumber();
    int array[lenght];
    creatrandomarray(array, lenght);
    cout << "array1 elements :" << endl;
    printarray(array, lenght);
    int arraycopy[lenght];
    int lenghtAfterCopy = creatcopyarray(array, arraycopy, lenght);
    cout << "array 2 after copy elements :" << endl;
    printarray(arraycopy, lenghtAfterCopy);
}

int main(){
    srand((unsigned)time(NULL));
    fullprograme();
    return 0;
}