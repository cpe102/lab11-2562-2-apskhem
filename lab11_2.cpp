#include<iostream>

using namespace std;

//Write function prototype here
int gcd(int, int);

int main(){
	cout << gcd(25,15) << "\n";
	cout << gcd(144,60) << "\n";
	cout << gcd(60,144) << "\n";
	cout << gcd(1,69) << "\n";
	cout << gcd(17,19) << "\n";
	cout << gcd(51,255) << "\n";
	
	return 0;
}

//Write function definition here
int gcd(int n, int m) {
    int z = n % m;
    if (z == 0) return m;
    else if (z == 1) return 1;
        
    return gcd(m,z);
}