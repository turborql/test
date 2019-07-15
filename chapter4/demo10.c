// 输入的整数开始递减到1而非递减到0。当输入的值小于0时，不进行换行。
#include <stdio.h>
int main(void){
int a;
printf("请输入一个整数：\n");
scanf("%d",&a);
while(a>0){
printf("%d", a--);

}


}