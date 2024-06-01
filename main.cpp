#include <iostream>
#include <ctime>
using namespace std;

int Check(int a, int b) {
    int c = 1;
    for (int i = 0; i < b; i++) {
        c *= a;
    }
    return c;
}

int main() {
    int a, b;
    cin >> a >> b;
    int res = Check(a, b);
    cout << res;
    return 0;
}
