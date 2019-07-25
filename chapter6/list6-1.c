// 创建一个函数，返回两个int型整数中较小一数的值。
#include <stdio.h>
int min(int a, int b) {
    int min = a;
    if (b < min)min = b;
    return min;
}
int main(void) {
    int a, b;
    printf("请输入两个整数：");
    printf("整数1:"); scanf("%d", &a);
    printf("整数2:"); scanf("%d", &b);
    printf("较小的值为：%d\n", min(a, b) );
    return 0;
}