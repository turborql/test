// 编写一段程序，读取两个整数的值，然后计算出它们之间所有整数的和。
#include <stdio.h>
int main(void) {
    int a, b;
    int sum = 0;
    int temp;

    printf("请输入两个整数：\n");
    // scanf("%d%d", &a, &b);
    scanf("%d", &a);
    scanf("%d", &b);
    if (a > b ) {
        temp = a;
        a = b;
        b = temp;
    }

    do {
        sum = sum + a;
        a++;


    } while (a -b<=0);
    printf("sum:%d\n", sum);
    return 0;
}