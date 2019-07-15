#include <stdio.h>
int main (void){
int a ;
    printf("请输入整数：\n");
    scanf("%d", &a);
    if (a == 0)printf("输入的a为0\n");
    else if (a > 0)
        printf("输入的a的符号为+\n");
    else if(a<0)
    	printf("输入的a的符号为-\n");
    return 0;

}