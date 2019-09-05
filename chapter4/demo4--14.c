/*
    显示输入的整数值以下的偶数
*/
#include <stdio.h>
int main(void) {
    int a;
    printf("请输入一个整数："); scanf("%d", &a);
    for (int i = 1; i < a; i++) {
    if(i%2==0){
    	printf("%d\n",i );
    }
    }
return 0;
}