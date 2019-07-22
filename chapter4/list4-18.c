// 编写一段程序，输入一个整数值，显示该整数个’*’。每显示5个就进行换行。
#include <stdio.h>
int main(void){
	int a,i;
	printf("请输入一个整数：");scanf("%d",&a);
for(i=1;i<=a;i++){
	putchar('*');
	if(i%5==0){
		putchar('\n');
	}
}
return 0;
}