// 编写一段程序，计算出输入的四个整数中的最大值并显示。
#include <stdio.h>
int main(void) {
    int a, b, c, d, max;
    printf("请输入四个整数：\n");
    printf("整数a:\n"); scanf("%d", &a);
    printf("整数b:\n"); scanf("%d", &b);
    printf("整数c:\n"); scanf("%d", &c);
    printf("整数d:\n"); scanf("%d", &d);
    max = a;
    if (b>max){max=b;}
    if (c>max){max=c;}
    if (d>max){max=d;}
    

    printf("最大值为：%d\n", max );
    return 0;





}