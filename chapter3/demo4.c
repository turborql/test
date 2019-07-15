/*
输入的整数是奇数还是偶数

*/
#include <stdio.h>
int main (void) {
    int a;
    printf("请输入一个整数：\n");
    scanf("%d", &a);
    if (a % 2)printf("a为奇数\n");
    else printf("a为偶数\n");
    return 0;



}