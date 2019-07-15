/*
输入三个正整数，从小到大一次排序
*/
#include <stdio.h>
int main (void) {
    int a, b, c, min, max;
    printf("输入三个正整数");
    printf("正整数a:\n"); scanf("%d", &a);
    printf("正整数b:\n"); scanf("%d", &b);
    printf("正整数c:\n"); scanf("%d", &c);



    min = b < c ? b : (c < a ? c : (a < b ? a : b));


    max = b > c ? b : (c > a ? c : (a > b ? a : b));
    printf("从小到大依次排序：%d<%d<%d\n", min, a + b + c - min - max, max);
    return 0;



}