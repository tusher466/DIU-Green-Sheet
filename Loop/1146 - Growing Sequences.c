//Problem: https://judge.beecrowd.com/en/problems/view/1146

#include <stdio.h>
int main () {

    int X;
    while(1)
    {
        scanf("%d", &X);
        if(X==0) break;
        else
        {
            for(int i=1; i < X; i++)
                printf("%d ",i);
        }
        printf("%d\n",X);
    }
    
    return 0;
}
