/*
    求四个整数中的最大值
*/
#include <stdio.h>
int max1(int a, int b) {
    return (a > b ? a : b);
}
int max(int a, int b, int c, int d) {
    return max1(max1(a, b), max1(c, d));
}
int main(void) {
    int a, b, c, d;
    puts("请输入四个整数：");
    printf("整数a:"); scanf("%d", &a);
    printf("整数b:"); scanf("%d", &b);
    printf("整数c:"); scanf("%d", &c);
    printf("整数d:"); scanf("%d", &d);
    printf("最大值为%d.\n", max(a, b, c, d) );
    return 0;
}