#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int readnumber(void){
    short number;
    cout << "enter lenght of your array from 1 to 100 :" << endl;
    cin >> number;
    return number;
}

int randomfunction(int from, int to){
    return (rand() % (from - to + 1) + from);
}

int	number_is_prime(int nb)
{
	if (nb < 2)
		return (0);
	for (int i = 2; i <= nb / 2 ; i++){
		if (nb % i == 0)
			return 0;
	}
	return 1;
}

void    fillarrayinrandom(int *array, int lenght){
    cout << "elements of array 1 : ";
    for(int i = 0; i < lenght; i++){
        array[i] = randomfunction(1, 100);
        cout << array[i];
        if(i < lenght - 1){
            cout << " , ";
        }
    }
    cout << endl;
}

void    copyarraytoenthorarray(int *array, int lenght){
    int *array2;
    int j = 0;
    cout << "element of array 2 after copy just prime number : ";
    for (int i = 0; i < lenght; i++){
        if (number_is_prime(array[i])){
            array2[j] = array[i];
            cout << array2[j] << " ";
        }
    }
    cout << endl;
}

void fullproject(int number){
    int array[number];
    fillarrayinrandom(array, number);
    copyarraytoenthorarray(array, number);
}

int main(){
    srand((unsigned)time(NULL));
    fullproject(readnumber());
    return 0;
}