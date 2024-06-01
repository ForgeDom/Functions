#include <iostream>
using namespace std;

void rectangle(int N, int K) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < K; ++j) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int N, K;
    cout << "Enter height (N): ";
    cin >> N;
    cout << "Enter width (K): ";
    cin >> K;

    rectangle(N, K);

    return 0;
}
