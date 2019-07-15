/*
输入的整数是奇数吗？
*/
#include <stdio.h>
int main(void) {
    int a;
    printf("请输入整数："); scanf("%d", &a);
    if (a % 2)printf("输入的整数为奇数\n");
    // puts("输入的为奇数")
    // 若输入的是偶数则什么也不显示
    return 0;

}