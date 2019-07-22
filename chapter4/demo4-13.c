/*
    输入规定个数整数并显示出它们的合计值和平均值(for)
*/
#include <stdio.h>
int main (void) {
    int a,i;
    int temp;
    int sum=0;
    printf("输入多少个整数：");
    scanf("%d", &a);
    for (i = 1; i <= a; i++) {
        scanf("%d",&temp);
        sum+=temp;
    }
    printf("合计值：%d,平均值：%.3f\n",sum,(double)sum/a );
    return 0;
}