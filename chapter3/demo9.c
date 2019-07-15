// 判断个位数是否为5
#include <stdio.h>
int main (void) {
    int a ;
    printf("请输入一个整数：\n");
    scanf("%d", &a);
    if (a % 10 == 5)printf("a个位为5\n");
    else printf("a个位不是5\n");
    return 0;	
}