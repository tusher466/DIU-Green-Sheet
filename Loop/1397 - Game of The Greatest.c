//Problem: https://judge.beecrowd.com/en/problems/view/1397

#include <stdio.h>
int main() {

    int N, A, B;
    while (scanf("%d", &N) == 1 && N != 0) {
        int wins_A = 0;
        int wins_B = 0;
        for (int i = 0; i < N; i++) {
            scanf("%d %d", &A, &B);
            if (A > B) {
                wins_A++;
            } else if (B > A) {
                wins_B++;
            }

        }
        printf("%d %d\n", wins_A, wins_B);
    }

    return 0;
}
