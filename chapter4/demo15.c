// 输入一个整数，连续显示出该整数个,当输入的值小于1时不输出换行符。
#include <stdio.h>

int main(void)
{
    int no;

    printf("请输入一个正数：");
    scanf("%d", &no);

    while (no-- > 0)
        putchar('*');
    putchar('\n');

    return 0;
}