//Problem: https://judge.beecrowd.com/en/problems/view/1067

#include <stdio.h>
 
int main() {
 
    int X;
    scanf("%d", &X);
    for (int i = 1; i <= X; i=i+2) {
        printf("%d\n", i);
    }

    return 0;
}
