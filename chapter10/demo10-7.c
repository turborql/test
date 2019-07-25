//将两个整数值按升序排列。
#include <stdio.h>
//交换两值
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
//修改排列顺序
void order(int *a, int *b) {
    if (*a > *b) {
        swap(a, b);
    }
}
int main(void) {
    int a, b;
    printf("请输入两个整数：\n");
    printf("整数a:"); scanf("%d", &a);
    printf("整数b:"); scanf("%d", &b);
    order(&a, &b);
    printf("按升序排列是%d  %d\n",a,b );
    return 0;
}