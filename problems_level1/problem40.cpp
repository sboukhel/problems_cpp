#include <iostream>
using namespace std;

void    addnumbertoarray(int *array, int *arraycopy, int &index, int &indexcopy){
    arraycopy[indexcopy++] = array[index++];
}

bool    checknumber(int *array, int number, int checknumber){
    for(int i = 0; i < number; i++){
        if (array[i] == checknumber){
            return false;
        }
    }
    return true;
}

int    creatcopyarray(int *array, int *arraycopy, int lenght){
    arraycopy[0] = array[0];
    int index_copy = 1;
    int index = 1;
    while (index < lenght){
        if (checknumber(arraycopy, lenght, array[index])){
            addnumbertoarray(array, arraycopy, index, index_copy);
        }
        else
            index++;
    }
    return index_copy;
}

void    printarray(int *array, int lenght){
    for(int i = 0; i < lenght; i++){
        cout << array[i];
        if (i < lenght - 1)
            cout << " , ";
    }
    cout << endl;
}

void    fullprograme(int lenght, int *array){
    cout << "array1 elements :" << endl;
    printarray(array, lenght);
    int arraycopy[lenght];
    int lenghtAfterCopy = creatcopyarray(array, arraycopy, lenght);
    cout << "array 2 after copy elements :" << endl;
    printarray(arraycopy, lenghtAfterCopy);
}

int main(){
    int lenght = 10;
    int array[lenght] = {10,10,10,20,20,20,30,30,30,40};
    fullprograme(lenght, array);
    return 0;
}