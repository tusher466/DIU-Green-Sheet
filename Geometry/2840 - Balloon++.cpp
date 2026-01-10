//Problem: https://judge.beecrowd.com/en/problems/view/2840

#include <iostream>

using namespace std;

int main() {
    long long R, L;

    while (cin >> R >> L) {
        double PI = 3.1415;
        double volume = (4.0 / 3.0) * PI * (double)R * (double)R * (double)R;
        long long result = L / volume;

        cout << result << endl;
    }

    return 0;
}
