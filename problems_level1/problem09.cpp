#include <iostream>
using namespace std;

int readnumber(string message){
    int number;
    cout << message << endl;
    cin >> number;
    return number;
}

int fandfrequencynumber(int number, int digit){
    int frequency = 0;
    while(number > 0){
        if (digit == number % 10){
            frequency++;
        }
        number /= 10;
    }
    return frequency;
}

void    printanswer(void){
    int number = readnumber("enter your number : ");

    for (int i = 0; i < 10; i++){
        int frequency = fandfrequencynumber(number, i);
        if(frequency > 0){
            cout << "digit" << i << "frequency is : " << fandfrequencynumber(number, i) << endl;
        }
    }
}

int main(){
    printanswer();
    return 0;
}
