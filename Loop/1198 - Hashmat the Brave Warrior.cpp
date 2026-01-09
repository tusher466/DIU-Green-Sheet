//Problem: https://judge.beecrowd.com/en/problems/view/1198

#include <bits/stdc++.h>
using namespace std;

int main() {

    long long hashmat_soldiers, opponent_soldiers;

    while (cin >> hashmat_soldiers >> opponent_soldiers) {

        long long difference = abs(hashmat_soldiers - opponent_soldiers);
        cout << difference << endl;
    }

    return 0;
}
