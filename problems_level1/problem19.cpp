#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int randomfuction(int from, int to){
    int number = rand() % (to - from + 1) + from;
    return number;
}

int main(){
    srand((unsigned)time(NULL));
    cout << "your random number is : " << endl;
    cout << randomfuction(1, 4000) << endl;
    return 0;
}