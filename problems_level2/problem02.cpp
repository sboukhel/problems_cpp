#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector> 
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

int sumOfRowInMatrix(int matrix[], int sizeofrow){
    int sum = 0;
    for (int index = 0; index < sizeofrow; index++){
        sum += matrix[index];
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

vector<int> saveSumInArray(int matrix[3][3], int row, int col){
    vector<int> array(row);
    for(int i = 0; i < row; i++){
        array[i] = sumOfRowInMatrix(matrix[i], col);
    }
    return array;
}

void    PrintSumOFRow(int matrix[3][3], int row, int col){
    cout << "\nthe sum of each row of matrix : " << endl;
    vector<int> array = saveSumInArray(matrix, row, col);

    for(int i = 1; i <= row; i++){
        cout << "sum of row[" << i << "] : " << array[i - 1] << endl;
    }
}

void    startProgramme(int matrix[3][3], int row, int col){
    saveNumberRandomInMatrix(matrix, 3, 3);
    PrintMatrix(matrix, 3, 3);
    PrintSumOFRow(matrix, 3, 3);
}

int main(){
    srand((unsigned)time(NULL));
    int matrix[3][3];
    startProgramme(matrix, 3,3);
    return 0;
}