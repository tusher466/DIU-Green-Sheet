//Problem: https://judge.beecrowd.com/en/problems/view/1008

#include <stdio.h>
 
int main() {
 
    int employee;
    float hours, month, salary;
    scanf("%d %f %f", &employee, &hours, &month);
    salary = hours * month;
    printf("NUMBER = %d\n", employee);
    printf("SALARY = U$ %.2f\n", salary);
 
    return 0;
}
