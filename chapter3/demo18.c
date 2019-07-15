/*
    计算所输入的三个整数中的最大值并显示
*/
#include <stdio.h>
int main (void) {
    int a, b, c, max;
    printf("请输入三个整数：\n");
    printf("整数a:\n"); scanf("%d", &a);
    printf("整数b:\n"); scanf("%d", &b);
    printf("整数c:\n"); scanf("%d", &c);
    max = a;
    if (b > max) {max = b;}
    if (c > max){max = c;}
    printf("最大值%d\n",max );
    return 0;
}



