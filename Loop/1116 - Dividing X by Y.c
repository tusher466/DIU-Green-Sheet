//Problem: https://judge.beecrowd.com/en/problems/view/1116

#include <stdio.h>
int main () {

    int t;
    float x, y;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%f %f", &x, &y);
        if (y == 0)
            printf("divisao impossivel\n");

        else
            printf("%.1f\n", x / y);

    }


    return 0;
}
