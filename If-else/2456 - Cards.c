//Problem: https://judge.beecrowd.com/en/problems/view/2456

#include <stdio.h>

int main() {
    int cards[5];
    int increasing = 0;
    int decreasing = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &cards[i]);
    }

    for (int i = 0; i < 4; i++) {
        if (cards[i] < cards[i + 1]) {
            increasing++;
        } else if (cards[i] > cards[i + 1]) {
            decreasing++;
        }
    }

    if (increasing == 4) {
        printf("C\n");
    } else if (decreasing == 4) {
        printf("D\n");
    } else {
        printf("N\n");
    }

    return 0;
}
