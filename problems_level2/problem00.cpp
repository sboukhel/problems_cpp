#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int randomFunction(int from, int to){
    return (rand() % (to - from + 1) + from);
}

void    PrintResult(void){
    int matrix[3][3];
    cout << "the following 3x3 random matrix : " << endl;
    for (int index1 = 0; index1 < 3; index1++){
        for (int index2 = 0; index2 < 3; index2++){
            matrix[index1][index2] = randomFunction(1, 100);
            cout << matrix[index1][index2] << "\t";
        }
        cout << endl;
    }
}

int main(){
    srand((unsigned)time(NULL));
    PrintResult();
    return 0;
}