#include <iostream>
using namespace std;

void    printheader(void){
    cout << "\n\n\t\t\tMultiptia  Table  From  1  To  10" << endl;
    cout << "\n\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10" << endl;
    cout << "___________________________________________________________________________________" << endl;
}
void    printnumber(void){
    for (int i = 1; i <= 10; i++){

        for (int j = 1; j <= 10; j++){
            if (j == 1){
                if (i == 10){
                    cout << "\n" << i << "   |  " << i * j;
                }
                else
                    cout << "\n" << i << "    |  " << j * i;
            }
            else
                cout << " \t" << i * j;
        }
    }
}

int main(){
    printheader();
    printnumber();
    return 0;
}