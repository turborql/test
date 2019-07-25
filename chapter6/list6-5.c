// 创建一个函数，返回1到n之间所有整数的和
#include <stdio.h>
int sum(int a) {
    int i;
    int sum=0;
    for (i = 1; i <= a; i++) {
        sum += i;
    }
    return sum;
}
int main(void) {
    int n;
    printf("请输入一个整数n:"); scanf("%d", &n);
    printf("和为：%d\n",sum(n) );
    return 0;
}