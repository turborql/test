// 使用if语句替换代码清单3-15程序中的条件运算符，实现同样的功能。
// 显示输入的两个整数的差并显示
#include <stdio.h>
int main(void){
	int a,b;
	printf("请输入两个整数：\n");
	printf("a:");scanf("%d",&a);
	printf("b:");scanf("%d",&b);
	if(a>b){printf("两个数的差为：%d\n",a-b );}
	if(a<b){printf("两个数的差为：%d\n",b-a );}
	return 0;


}