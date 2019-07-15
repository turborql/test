/*
    显示所输入的两个整数中较大的值（三目运算符）
*/
# include <stdio.h>
int main (void) {
    int a, b, max;
    printf("请输入两个整数：\n");
    printf("整数a:\n"); scanf("%d", &a);
    printf("整数b:\n"); scanf("%d", &b);
    max = a > b ? a : b;
    printf("较大的数%d\n", max );
    return 0;
}