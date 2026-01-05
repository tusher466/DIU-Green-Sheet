//Problem: https://judge.beecrowd.com/en/problems/view/2787

#include <stdio.h>
int main () {

    int L, C;
    scanf("%d %d", &L, &C);
    if ((L % 2 == 0 || C % 2 == 0) && (L % 2 != 0 || C % 2 != 0)) {
        printf("0\n"); // White
    } else {
        printf("1\n"); // Black
    }

    return 0;
}
