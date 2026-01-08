//Problem: https://judge.beecrowd.com/en/problems/view/2863

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    while (cin >> T) {
        double min_time = 12.0;
        double current_time;

        for (int i = 0; i < T; i++) {
            cin >> current_time;
            if (current_time < min_time) {
                min_time = current_time;
            }
        }
        cout << min_time << endl;
    }
    return 0;
}
