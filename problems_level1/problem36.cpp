#include <iostream>
using namespace std;

int readnumber (void){
    int number;
    cin >> number;
    return number;
}

void    addnumberinarray(int *array, int &index){
    bool answer = true;
    do{
        cout << "please enter a number : ";
        array[index++] = readnumber();
        cout << "do you want to add more number ? :\n(0) no\n(1) yes" << endl;
        cin >> answer;        
    } while (answer);
}

void    creatarray(int *array, int &index){
    for(int i = 0; i < index; i++){
        cout << array[i];
        if (i < index - 1)
            cout << " , ";
    }
    cout << endl;
}

void    printarray(void){
    int index = 0;
    int array[1000];
    addnumberinarray(array, index);
    cout << "\narray lenght : " << index;
    cout << "\narray elements : ";
    creatarray(array, index);
}

int main(){
    printarray();
    return 0;
}