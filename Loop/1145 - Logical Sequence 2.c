//Problem: https://judge.beecrowd.com/en/problems/view/1145

#include <stdio.h>
int main () {

    int n, a, k, l, m=1;
    scanf("%d %d",&a,&n);
    k=n/a;
    l=a;
    for(int i = 1; i <= k; i++)
    {
        printf("%d",m);
        for(int j=m+1; j <= l; j++)
        {
            printf(" %d",j);
        }
        printf("\n");
        m=m+a;
        l=l+a;
    }


    return 0;
}
