//Problem: https://judge.beecrowd.com/en/problems/view/1547

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    while (n--) {
        int qt, s;
        cin >> qt >> s;

        int winner_pos = 1;
        int min_diff = INT_MAX;
        bool found_exact = false;

        for (int i = 1; i <= qt; i++) {
            int guess;
            cin >> guess;

            if (found_exact) continue;

            int current_diff = abs(guess - s);

            if (current_diff < min_diff) {
                min_diff = current_diff;
                winner_pos = i;
                if (current_diff == 0) found_exact = true;
            }
        }
        cout << winner_pos << endl;
    }
    return 0;
}
