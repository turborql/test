// 编写一段程序，求 1 到 n 的和。 n 的值从键盘输入。
#include <stdio.h>
int main(void){
	int n;
	int i;
	int sum=0;
	printf("请输入一个整数：");scanf("%d",&n);
	for(i=1;i<=n;i++){

       sum+=i;
	}
	printf("1到%d的和%d\n",n,sum );
	return 0;

}