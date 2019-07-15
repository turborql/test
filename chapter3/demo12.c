// 输入一个整数值，显示他的绝对值
#include <stdio.h>
int main(void) {
    int a;
    printf("请输入一个整数\n");
    scanf("%d", &a);
    if (a == 0)
        printf("a为0\n");
    else if (a > 0)

        printf("a为%d\n", a);
    else printf("a为%d\n", -a );
    return 0;
}