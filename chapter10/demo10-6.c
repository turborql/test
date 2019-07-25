/*
将两个整数值互换
*/
#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(void) {
    int a, b;
    printf("请输入两个整数：\n");
    printf("整数a:"); scanf("%d", &a);
    printf("整数b:"); scanf("%d", &b);
    printf("互换了a,b的值\n");
    swap(&a, &b);
    printf("整数a：%d,整数b：%d\n", a, b );
    return 0;
}