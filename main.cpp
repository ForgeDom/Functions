#include <iostream>
#include <ctime>
using namespace std;

int cub(int a) {
	return a * a * a;
}

int main()
{
	int a;
	cin >> a;
	
	int res = cub(a);
	cout << res;
	return 0;
}