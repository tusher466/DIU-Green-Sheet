//Problem: https://judge.beecrowd.com/en/problems/view/1039

#include <bits/stdc++.h>
using namespace std;

int main() {
    int r1, x1, y1, r2, x2, y2;
    while (cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2) {
        long long distSq = (long long)(x2 - x1) * (x2 - x1) + (long long)(y2 - y1) * (y2 - y1);
        
        if (r1 >= r2) {
            long long radiusDiff = (long long)(r1 - r2) * (r1 - r2);
            if (distSq <= radiusDiff) {
                cout << "RICO" << endl;
            } else {
                cout << "MORTO" << endl;
            }
        } else {
            cout << "MORTO" << endl;
        }
    }
    return 0;
}
