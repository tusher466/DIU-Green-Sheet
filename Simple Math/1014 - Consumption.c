//Problem: https://judge.beecrowd.com/en/problems/view/1014

#include <stdio.h>
 
int main() {
 
    int X;
    float Y, M;
    scanf("%d %f", &X, &Y);
    M = X / Y;
    printf("%.3f km/l\n", M);
 
    return 0;
}
