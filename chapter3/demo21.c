/*编写一段程序，计算出输入的三个整数中的最小值并显示。

※注意使用if语句*/
#include <stdio.h>
int main (void){
	int a,b,c,min;
	printf("请输入三个整数：");
	printf("整数a:");scanf("%d",&a);
	printf("整数b:");scanf("%d",&b);
	printf("整数c:");scanf("%d",&c);
	min=a;
	if (b<min){
		min=b;
	}if(c<min){
		min=c;
	}
	
	printf("三个整数最小值为%d\n",min );
	return 0;

}