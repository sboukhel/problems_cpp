#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char randomfuction(char from, char to){
    int number = rand() % (to - from + 1) + from;
    return number;
}

int main(){
    srand((unsigned)time(NULL));

    cout << randomfuction('a', 'z') << endl;
    cout << randomfuction('A', 'Z') << endl;
    cout << randomfuction('1', '9') << endl;
    cout << randomfuction('#', '&') << endl;
    return 0;
}