// 对代码清单3-4中的程序进行修改，不使用if语句，而是改用switch语句来实现。
#include <stdio.h>
int main(void){
	int a;
	printf("请输入一个整数\n");
	scanf("%d",&a);
	switch(a%2){
		case 1:puts("奇数");break;
		case 2:puts("偶数");break;

	}

	return 0;
}