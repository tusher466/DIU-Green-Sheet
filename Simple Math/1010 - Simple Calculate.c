//Problem: https://judge.beecrowd.com/en/problems/view/1010

#include <stdio.h>
 
int main() {
 
    int product_code1, product_code2, unit1, unit2;
    float unit_price1, unit_price2, total_price;
    scanf("%d %d %f %d %d %f", &product_code1, &unit1, &unit_price1, &product_code2, &unit2, &unit_price2);
    total_price = unit1 * unit_price1 + unit2 * unit_price2;
    printf("VALOR A PAGAR: R$ %.2f\n", total_price);
 
    return 0;
}
