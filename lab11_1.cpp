#include<iostream>

using namespace std;

//Write prototype of function fibonacci() here
unsigned long long fibonacci(unsigned long long);

int main(){
	cout << fibonacci(0) << "\n";
	cout << fibonacci(1) << "\n";
	cout << fibonacci(2) << "\n";
	cout << fibonacci(15) << "\n";
	cout << fibonacci(30) << "\n";
	cout << fibonacci(50) << "\n";
	
	return 0;
}

//Write definition of function fibonacci() here
unsigned long long fibonacci(unsigned long long n) {
    if (n < 1) return 0;
    else if (n == 1) return 1;
    else return fibonacci(n-1) + fibonacci(n-2);
}
