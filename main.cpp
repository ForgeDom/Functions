#include <iostream>
#include <ctime>
using namespace std;

int Sum(int a, int b) {
	int sum = 0;
	for (int i = a; i <= b; i++) {
		sum += i;
	}
	return sum;
}

int main()
{
	int a, b;
	cin >> a >> b;
	int res = Sum(a, b);
	cout << res;
	return 0;
}