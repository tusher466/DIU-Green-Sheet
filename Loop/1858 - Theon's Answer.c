//Problem: https://judge.beecrowd.com/en/problems/view/1858

#include <stdio.h>
int main () {

    int a, d=0, e=1;
    scanf("%d", &a);
    int ara[a];
    for(int b=0; b<a; b++)
        scanf("%d", &ara[b]);
    int c=ara[d];
    for(d=0; d<a; d++)
    {
        if(ara[d]<c)
        {
            c=ara[d];
            e=d+1;
        }

    }
    printf("%d\n", e);

    return 0;
}
