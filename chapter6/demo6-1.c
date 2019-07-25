/*
    求两个整数中较大的值
*/
#include <stdio.h>
int max(int a, int b) {

    if (a > b) {
        printf("max:%d\n", a );
        return a;
    } else {
        printf("max:%d\n", b );
        return b;
    }
}
int main(void) {
    int n1, n2;
    puts("请输入两个整数：");
    scanf("%d%d", &n1, &n2);
    printf("较大的整数值为%d\n", max(n1, n2) );
    return 0;
}