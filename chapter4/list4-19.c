// 编写一段程序，对代码清单4-15进行修改，在显示所输入的整数值的所有约数之后，显示约数的个数。
#include <stdio.h>
int main(void){
int a,i;
int count=0;
printf("请输入一个整数：");scanf("%d",&a);
for(i=1;i<=a;i++){
	if(a%i==0){
		printf("%d",i );
		count++;
	}
}
putchar('\n')
printf("约数有%d个\n",count );
return 0;

}