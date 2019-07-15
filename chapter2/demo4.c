#include <stdio.h>
int main (void){
	int a,b;
	printf("请输入两个整数：");
	printf("整数a:\n");scanf("%d",&a);
	printf("整数b:\n");scanf("%d",&b);
	printf("a是b的%d%%\n", a/b*100);
	return 0;
}