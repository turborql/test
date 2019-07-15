/*
   不停的输入整数，显示其和及平均值（使用复合赋值运算符和后置递增运算符）
*/
#include <stdio.h>
int main (void) {
    int a, retry;
    int sum = 0;
    int cnt = 0;

    do {

        printf("请输入一个整数：\n");
        scanf("%d", &a);
        sum += a;
        a++;
        cnt++;



        printf("是否继续输入，yes--0,no---1\n");
        scanf("%d", &retry);
    } while (retry == 0);
    printf("sum为%d\n", sum );
    printf("average为%f\n", (double)sum / cnt);
    return 0;
}