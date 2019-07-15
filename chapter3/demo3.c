/*
输入的整数能被5整除吗？
*/
#include <stdio.h>
int main(void) {
    int a;
    printf("请输入整数：");
    scanf("%d", &a);
    if (a % 5) {
        printf("a不能被5整除\n");
    } else {
        printf("a能被5整除\n");

    }
    return 0;

}