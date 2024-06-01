#include <iostream>
#include <ctime>
using namespace std;

bool Check(int a) {
	if (a < 0) {
		return false;
	}
	for (int i = 2; i <= a / 2; ++i) {
		if (a % i == 0) {
			return false;
		}
	}
	return true;
}

int main()
{
	int a;
	cout << "Enter the value: ";
	cin >> a;

	if (Check(a)) {
		cout << "E prostum" << endl;
	}
	else {
		cout << "Ne e prostum" << endl;
	}

	return 0;
}