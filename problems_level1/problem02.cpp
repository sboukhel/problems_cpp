#include <iostream>
using namespace std;

int readnumber(void){
    int number;
    cout << "enter your number : " << endl;
    cin >> number;
    return number;
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

void    printprimenumber(int number){
    cout << "this is your prime numbers from 1 to " << number << endl;
    if (number >= 2)
        cout << 2;
    for(int i = 3; i <= number ; i++){
        if (number_is_prime(i) == 1){
            cout << " -> ";
            cout << i;
        }
    }
}

int main(){
    printprimenumber(readnumber());
    return 0;
}