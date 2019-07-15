// 编写一段程序，显示出小于输入的整数的所有2的乘方。
#include <stdio.h>
int main (void){
printf("请输入一个整数：\n");
int a;
int i=1;
scanf("%d",&a);
while (i<=a){

printf("%d\n",i );
i*=2;


}
return 0;


}