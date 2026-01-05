//Problem: https://judge.beecrowd.com/en/problems/view/2987

#include <stdio.h>
int main() {

    char letter;
    int position;
    scanf("%c", &letter);
    position = letter - 'A' + 1;
    printf("%d\n", position);
    
    return 0;
}
