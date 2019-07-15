// 使用条件运算符替换练习3-6的程序中的if语句，实现同样的功能。
// 输入的三个整数中的最小值并显示
#include <stdio.h>
int main(void){
	int a ,b,c,min;
	printf("请输入两个整数：\n");
	printf("a:\n");scanf("%d",&a);
	printf("b:\n");scanf("%d",&b);
	printf("c:\n");scanf("%d",&c);
	min=b<c?b:(c<a?c:(a<b?a:b));
	printf("最小值为：%d\n",min );
	return 0;

}