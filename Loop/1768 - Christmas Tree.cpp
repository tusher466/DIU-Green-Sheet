//Problem: https://judge.beecrowd.com/en/problems/view/1768

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        for (int i = 1; i <= n; i += 2) {
            int spaces = (n - i) / 2;
            for (int j = 0; j < spaces; j++) cout << " ";
            for (int j = 0; j < i; j++) cout << "*";
            cout << endl;
        }

        int space1 = (n - 1) / 2;
        for (int j = 0; j < space1; j++) cout << " ";
        cout << "*" << endl;

        int space2 = (n - 3) / 2;
        for (int j = 0; j < space2; j++) cout << " ";
        cout << "***" << endl;

        cout << endl;
    }
    return 0;
}
