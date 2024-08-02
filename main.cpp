#include <iostream>

using namespace std;

bool isPerfect(int number) {
    int sum = 1; 
    for (int i = 2; i <= number / 2; ++i) {
        if (number % i == 0) {
            sum += i;
        }
    }

    return sum == number;
}

int findPerfectNumbersInRange(int start, int end, int perfectNumbers[], int maxSize) {
    int count = 0;

    for (int i = start; i <= end && count < maxSize; ++i) {
        if (isPerfect(i)) {
            perfectNumbers[count++] = i;
        }
    }

    return count; 
}

int main() {
    int start, end;
    const int maxPerfectNumbers = 10; 
    int perfectNumbers[maxPerfectNumbers];

    cout << "Enter beginning of the interval: ";
    cin >> start;
    cout << "Enter end of the interval: ";
    cin >> end;

    int count = findPerfectNumbersInRange(start, end, perfectNumbers, maxPerfectNumbers);

    cout << "Perfect number are from " << start << " to " << end << ": ";
    for (int i = 0; i < count; ++i) {
        cout << perfectNumbers[i] << " ";
    }
    cout << endl;

    return 0;
}
