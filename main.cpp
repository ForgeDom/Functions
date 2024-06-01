#include <iostream>
#include <ctime>
using namespace std;

int factorial(int a) {
	int b = 1;
	for (int i = 1; i <= a; ++i) {
		b *= i;
	}
	return b;
}

int main()
{
	int a;
	cout << "Enter the value:" << endl;
	cin >> a;

	if (a < 0) {
		cout << "Factorial cant be negative" << endl;
	}
	else {
		int res = factorial(a); 
		cout << res;
	}
	
	return 0;
}