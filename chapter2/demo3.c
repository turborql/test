#include <stdio.h>
int main(void){
int a ,b;
puts("请输入两个整数：");
printf("整数a");scanf("%d",&a);
printf("整数b");scanf("%d",&b);
printf("他们的商为%d余数为%d\n ",a/b,a%b);
return 0;


}