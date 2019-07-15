// 如果输入的整数值为正，则判断该值的奇偶性并显示
#include <stdio.h>
int main (void) {
    int a;
    printf("请输入一个整数：\n");
    scanf("%d", &a);
    if (a > 0)
        if (a % 2)printf("a为奇数\n");
        else printf("a为偶数\n");
    else printf("输入的整数不为正\n");
    return 0;
}