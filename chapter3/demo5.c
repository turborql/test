/*
输入两个整数值，显示B是否是A的约数

*/
#include <stdio.h>
int main (void) {
    int a , b;
    printf("请输入两个整数：\n");
    scanf("%d%d", &a, &b);
    if (a % b)
        printf("b不是a的约数。\n");
    else printf("b是a 的约数\n");
    return 0;



}