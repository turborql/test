
/*
    输入规定个数整数并显示出它们的合计值和平均值(for)
*/
#include <stdio.h>
int main(void) {
    int n;
    int temp;
    int sum=0;
    printf("要输入多少个整数："); scanf("%d", &n);
    for (int i =1; i <= n; i++) {
        printf("NO.%d:", i);
        scanf("%d", &temp);
        sum +=temp;
    }
   printf("合计值：%d，",sum);
   printf("平均值：%.2f\n",(double)sum/n );
   return 0;
}