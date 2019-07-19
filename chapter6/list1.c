// 创建一个函数，返回两个int型整数中较小一数的值。
#include <stdio.h>
int min(a, b) {
    int min = a;
    if (b < min) {
        min = b;
        return b;
    } else {
        return a;
    }

}

int main(void) {
    int n1, n2;
    printf("整数1:"); scanf("%d", &n1);
    printf("整数2:"); scanf("%d", &n2);
    printf("较小值：%d\n", min(n1, n2) );


//     return 0;
}