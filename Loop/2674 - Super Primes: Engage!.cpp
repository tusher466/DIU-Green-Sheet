//Problem: https://judge.beecrowd.com/en/problems/view/2674

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool allDigitsPrime(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit != 2 && digit != 3 && digit != 5 && digit != 7) {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main() {
    int n;
    while (cin >> n) {
        if (isPrime(n)) {
            if (allDigitsPrime(n)) {
                cout << "Super" << endl;
            } else {
                cout << "Primo" << endl;
            }
        } else {
            cout << "Nada" << endl;
        }
    }
    return 0;
}
