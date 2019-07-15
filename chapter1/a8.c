#include <stdio.h>
int main(void){
	puts("请输入两个整数：");
	int n1,n2;
	printf("整数1:\n");scanf("%d",&n1);
	printf("整数2:\n");scanf("%d",&n2);
	printf("他们的乘积是%d\n",n1*n2);
	return 0;
}