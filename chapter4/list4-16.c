// 编写一段程序，输入一个整数值，显示该整数值以下的所有奇数。
#include <stdio.h>
int main(void){
	int a,i;
printf(" 请输入一个整数：");scanf("%d",&a);
for(i=1;i<=a;i++){

	if(i%2){
		printf("%d",i);
	}

}
putchar('\n');
return 0;
}