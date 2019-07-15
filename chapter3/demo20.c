/*
    显示输入的两个整数的差并显示（条件运算符）
*/
#include <stdio.h>
int main(void){
	int a ,b;
	puts("请输入两个整数：");
	printf("整数a:\n");scanf("%d",&a);
	printf("整数b:\n");scanf("%d",&b);
	printf("他们的差为：%d\n",a>b?a-b:b-a);
	return 0;

}