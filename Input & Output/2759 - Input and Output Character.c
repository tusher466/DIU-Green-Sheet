//Problem: https://judge.beecrowd.com/en/problems/view/2759

#include <stdio.h>
 
int main() {
 
    char n1,n2,n3;
    scanf("%c ",&n1);
    scanf("%c ",&n2);
    scanf("%c",&n3);
    printf("A = %c, B = %c, C = %c\n", n1, n2, n3);
    printf("A = %c, B = %c, C = %c\n", n2, n3, n1);
    printf("A = %c, B = %c, C = %c\n", n3, n1, n2);

 
    return 0;
}
