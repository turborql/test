// 编写一段程序，显示以所输入整数为边长的正方形。
#include <stdio.h>
int main(void){
	int a;
	printf("请输入一个整数：");scanf("%d",&a);
	for(int i=1;i<=a;i++){
		for(int j=1;j<=a;j++){
			putchar('*');
		}
		putchar('\n');
	}
return 0;
}