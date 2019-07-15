// 从输入的整数开始倒数到0
#include <stdio.h>
int main (void) {
    int a;
    printf("请输入一个整数：\n");
    scanf("%d", &a);
    while (a > 0){

       a--;
       printf("%d\n",a);
       
    }
    
    
    return 0;


}