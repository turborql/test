/*
计算两个整数的和与差
*/
#include <stdio.h>
void sum_diff(int a, int b, int *sum, int *diff) {
    *sum = a + b;
    *diff = a > b ? a - b : b - a;
}
int main(void) {
    int a, b;
    int wa = 0, sa = 0;
    printf("请输入两个整数：\n");
    printf("整数A："); scanf("%d", &a);
    printf("整数B："); scanf("%d", &b);
    sum_diff(a, b, &wa, &sa);
    printf("两数之和为%d,之差为%d\n", wa, sa );
    return 0;
}
