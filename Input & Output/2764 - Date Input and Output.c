//Problem: https://judge.beecrowd.com/en/problems/view/2764

#include <stdio.h>
 
int main() {
 
    char d1, d2, s1, m1, m2, s2, y1, y2;
    scanf("%c", &d1);
    scanf("%c", &d2);
    scanf("%c", &s1);
    scanf("%c", &m1);
    scanf("%c", &m2);
    scanf("%c", &s2);
    scanf("%c", &y1);
    scanf("%c", &y2);
    printf("%c%c%c%c%c%c%c%c\n", m1, m2, s1, d1, d2, s2, y1, y2);
    printf("%c%c%c%c%c%c%c%c\n", y1, y2, s1, m1, m2, s2, d1, d2);
    printf("%c%c-%c%c-%c%c\n", d1, d2, m1, m2, y1, y2);
 
    return 0;
}
