#include <iostream>
#include <ctime>
using namespace std;

bool Check(int a) {
	if (a < 0) {
		return false;
	}
	else if (a > 0) {
		return true;
	}
	else {
		return false;
	}
}
int main()
{
	int a;
	cin >> a;

	bool res = Check(a);

	if (res) {
		cout << a << " is positive." << endl;
	}
	else {
		cout << a << " is zero or negative." << endl;
	}

	return 0;
}