// 编写一段程序，显示1到n的整数值的二次方。
#include <stdio.h>
int main(void){
int n,i;
printf("请输入一个整数：");scanf("%d",&n);
for(i=1;i<=n;i++){
	printf("%d\n",i*i );
}

return 0;
}