//Problem: https://judge.beecrowd.com/en/problems/view/2518

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    double H, C, L;

    while (cin >> N) {
        cin >> H >> C >> L;

        double diagonal = sqrt(H * H + C * C);

        double totalLength = N * diagonal;
        
        double areaCm2 = totalLength * L;

        double areaM2 = areaCm2 / 10000.0;

        cout << fixed << setprecision(4) << areaM2 << endl;
    }

    return 0;
}
