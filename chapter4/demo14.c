/*
    输入一个整数，连续显示出该整数个 *
*/
#include <stdio.h>
int main(void){
int a;
printf("请输入一个正整数：\n");
scanf("%d",&a); 
while(a>0){
a--;

	printf("*\n");
}

return 0;

}