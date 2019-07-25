// 创建一个函数，返回int型整数的立方
#include <stdio.h>
int sqr(int a) {
    return a * a * a;
}
int main(void) {
    int a;
    printf("请输入一个整数：");
    scanf("%d", &a);
    printf("输入整数的立方为：%d\n", sqr(a) );
    return 0;
}