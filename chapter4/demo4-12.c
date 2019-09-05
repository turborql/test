/*
    输入一个整数，连续显示出该整数个 *（for）
*/
#include <stdio.h>
int main(void){
	int a;
	printf("请输入一个整数：");scanf("%d",&a);
	for(int i=1;i<=a;i++){
       printf("*");
	}
	printf("\n");
}