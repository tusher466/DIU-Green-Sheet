//Problem: https://judge.beecrowd.com/en/problems/view/1641

#include <bits/stdc++.h>
using namespace std;

int main() {
    int R, W, L;
    int caseNum = 1;

    while (cin >> R && R != 0) {
        cin >> W >> L;

        long long diagonal_sq = (long long)W * W + (long long)L * L;
        long long diameter_sq = (long long)(2 * R) * (2 * R);

        if (diagonal_sq <= diameter_sq) {
            cout << "Pizza " << caseNum << " fits on the table." << endl;
        } else {
            cout << "Pizza " << caseNum << " does not fit on the table." << endl;
        }

        caseNum++;
    }

    return 0;
}
