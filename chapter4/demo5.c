// 代码清单3-9是判断所输入的整数值的符号的程序，请将其改写为可以将输入显示这一过程循环任意次。
#include <stdio.h>
int main(void) {
    int a;
    int retry;
    do {
        printf("请输入一个整数：\n");
        scanf("%d", &a);
        if (a > 0)printf("是正数\n");
        if (a < 0) printf("是负数\n" );
        if (a == 0)   printf("是0\n");

        printf("是否继续输入？是--0，否--1\n");
        scanf("%d", &retry);
    } while (retry == 0);


    return 0;

}