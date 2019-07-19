/*
    求三个整数中最大的值
*/
#include <stdio.h>
int max(a, b, c) {
    int max = a;
    if (b>max)max=b;
    if(c>max)max=c;
    return max;



}
int main(void){
	int a,b,c;
printf("请输入三个整数：");
printf("整数1：");scanf("%d",&a);
printf("整数2：");scanf("%d",&b);
printf("整数3：");scanf("%d",&c);
printf(" 最大为：%d\n",max(a,b,c));
return 0;

}