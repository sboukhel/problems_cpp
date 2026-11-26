#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int randomFunction(int from, int to){
    return (rand() % (to - from + 1) + from);
}

void    saveNumberRandomInMatrix(int matrix[3][3], int row, int col){
    for (int index1 = 0; index1 < row; index1++){
        for(int index2 = 0; index2 < col; index2++){
            matrix[index1][index2] = randomFunction(1, 100);
        }
    }
}

int sumOfcolInMatrix(int matrix[3][3], int sizeofrow, int numbercol){
    int sum = 0;
    for (int index = 0; index < sizeofrow; index++){
        sum += matrix[index][numbercol];
    }
    return sum;
}

void    PrintMatrix(int matrix[3][3], int row, int col){
    cout << "the following 3x3 random matrix : " << endl;
    for (int index1 = 0; index1 < row; index1++){
        for (int index2 = 0; index2 < col; index2++){
            cout << matrix[index1][index2];
            if (index2 < col - 1){
                cout << "\t";
            }
        }
        cout << endl;
    }
}

void    PrintSumOFcol(int matrix[3][3], int row, int col){
    cout << "\nthe sum of each col of matrix : " << endl;
    for(int i = 1; i <= col; i++){
        cout << "sum of col[" << i << "] : " << sumOfcolInMatrix(matrix, row, (i - 1)) << endl;
    }
}

void    startProgramme(int matrix[3][3], int row, int col){
    saveNumberRandomInMatrix(matrix, 3, 3);
    PrintMatrix(matrix, 3, 3);
    PrintSumOFcol(matrix, 3, 3);
}

int main(){
    srand((unsigned)time(NULL));
    int matrix[3][3];
    startProgramme(matrix, 3,3);
    return 0;
}