#include <iostream>
using namespace std;

long double fact(int N)
{
    if(N < 0) // если пользователь ввел отрицательное число
        return 0; // возвращаем ноль
    if (N == 0) // если пользователь ввел ноль,
        return 1; // возвращаем факториал от нуля - не удивляетесь, но это 1 =)
    else // В
        return N * fact(N - 1); // делаем 
}

int main(){
	int number;
	cin>>number;
	cout<<fact(number);
	return 0;
}
