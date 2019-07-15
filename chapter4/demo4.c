/*
    不停的输入整数，显示其和及平均值
*/
#include <stdio.h>
int main(void)
{
int i;
int retry;
int sum=0;
double  average;
int cnt=1;


do{

printf("请输入一个整数：\n");
scanf("%d",&i);
sum =sum + i;
average=(sum)/cnt;
cnt++;


printf("是否还要继续输入整数？yes---0,no---1\n");
scanf("%d",&retry);

}while (retry==0);
printf("sum:%d,average:%.2f\n",sum,average);

}



/*#include <stdio.h>
int main(void) {
    int sum = 0;
    int cnt = 0;
    int retry;
    do {
        int t;
        printf("请输入一个整数：\n");
        scanf("%d", &t);
        sum = sum + t;
        cnt++;
        printf("是否还要继续输入整数？yes---0，no---1\n");
        scanf("%d", &retry);

    } while (retry == 0);
    printf("sum:%d,average:%.2f\\n", sum, (double)sum / cnt);
    return 0;
}*/