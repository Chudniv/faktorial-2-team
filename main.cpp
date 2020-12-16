#include <iostream>
using namespace std;

long double fact(int N)
{
    if(N < 0) // якщо користувач ввів відємне число 
        return 0; //вертаємо нуль
    if (N == 0) //якщо нуль
        return 1; // факторіал нуля рівний 1
    else 
        return N * fact(N - 1); //рекурсія
        
}

int main(){
	int number;
	cin>>number;
	cout<<fact(number);
	return 0;
}
