/*
输入的两个整数相等吗
*/
#include <stdio.h>
int main (void) {
    int a, b;
    printf("请输入两个整数：\n");
    scanf("%d%d", &a, &b);
    if (a == b)printf("a等于b\n");
    else printf("a不等于b\n");
    return 0;

}