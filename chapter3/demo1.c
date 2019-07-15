/*
输入的整数能被5整除吗？
*/
# include <stdio.h>
int main (void){

	int a;
	scanf("%d",&a);
	if (a%5)
	// printf("输入的整数不能被5整除。\n");
     puts("输入的整数不能被5整除。");
    return 0;
}