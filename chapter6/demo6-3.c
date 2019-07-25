/*
    计算两个整数的平方差
*/
#include <stdio.h>
int sqr(int a) {
    return a * a;
}
int dif(int a, int b) {
    return (a > b ? a - b : b - a);
}
int main(void) {
    int a, b;
    printf("请输入两个整数：\n");
    printf("整数1:"); scanf("%d", &a);
    printf("整数2:"); scanf("%d", &b);
    printf("平方差为：%d\n", dif(sqr(a), sqr(b)) );
    return 0;
}