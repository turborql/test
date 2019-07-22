/*
    画一个长方形
*/
#include <stdio.h>

int main(void)
{
    int i,j,a;
    printf("请输入长方形的边长：");scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=a;j++){
            putchar('*');     
        }
        putchar('\n');
    }

    return 0;
}