// 创建一个函数，返回三个int型整数中的最小值。
#include <stdio.h>
int min(int a, int b, int c) {
    int min = a;
    if (b < min)min = b;
    if (c < min)min = c;
    return min;
}

int main(void) {
    int a, b, c;
    printf("请输入三个整数:\n");
    printf("整数1:"); scanf("%d", &a);
    printf("整数2:"); scanf("%d", &b);
    printf("整数3:"); scanf("%d", &c);
    printf("最小值为：%d", min(a, b, c));
    return 0;
}