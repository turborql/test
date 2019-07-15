/*
    显示所输入的月份所处的季节
*/
#include <stdio.h>
int main (void){
int month;
printf("请输入月份：\n");
scanf("%d",&month);
switch(month){
case 1:puts("1是春季");break;
case 2:puts("2是春季");break;
case 3:puts("3是春季");break;
case 4:puts("4是夏季");break;
case 5:puts("5是夏季");break;
case 6:puts("6是夏季");break;
case 7:puts("7是秋季");break;
case 8:puts("8是秋季");break;
case 9:puts("9是秋季");break;
case 10:puts("10是冬季");break;
case 11:puts("11是冬季");break;
case 12:puts("12是冬季");break;
default :puts("输入的不是月份");break;
}
return 0;

}