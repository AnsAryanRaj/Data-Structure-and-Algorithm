#include<iostream>
using namespace std;

void prime(int n) {
    for (int i = 2; i <= n; i++) {
        bool isPrime = true;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    prime(13);
    prime(39);
    return 0;
}