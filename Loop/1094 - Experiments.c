//Problem: https://judge.beecrowd.com/en/problems/view/1094

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, amount;
    char type;
    int total = 0, coelhos = 0, ratos = 0, sapos = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> amount >> type;
        total += amount;

        if (type == 'C') {
            coelhos += amount;
        } else if (type == 'R') {
            ratos += amount;
        } else if (type == 'S') {
            sapos += amount;
        }
    }

    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << coelhos << endl;
    cout << "Total de ratos: " << ratos << endl;
    cout << "Total de sapos: " << sapos << endl;

    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << (double)coelhos * 100 / total << " %" << endl;
    cout << "Percentual de ratos: " << (double)ratos * 100 / total << " %" << endl;
    cout << "Percentual de sapos: " << (double)sapos * 100 / total << " %" << endl;

    return 0;
}
