//Problem: https://judge.beecrowd.com/en/problems/view/1157

#include<stdio.h>
int main()
{
    int N, a;
    scanf("%d", &N);
    for (a = 1; a <= N; a++) {
        if (N % a == 0) {
            printf("%d\n", a);
        }
    }
    
    return 0;
}
