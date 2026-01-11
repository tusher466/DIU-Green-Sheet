//Problem: https://judge.beecrowd.com/en/problems/view/2029

#include <bits/stdc++.h>
using namespace std;

int main() {
    double V, D;
    while (cin >> V >> D) {
        double radius = D / 2.0;
        double area = 3.14 * radius * radius;
        double height = V / area;

        cout << fixed << setprecision(2);
        cout << "ALTURA = " << height << endl;
        cout << "AREA = " << area << endl;
    }
    return 0;
}
