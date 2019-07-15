/*
    显示所输入的两个整数中较大的值
*/
# include <stdio.h>
int main(void){
	int a ,b;
	printf("请输入两个整数：\n");
	printf("整数a:");scanf("%d",&a);
	printf("整数b:");scanf("%d",&b);
	if(a>b)printf("%d\n",a );
	else printf("%d\n",b );
}