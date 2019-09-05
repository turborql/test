/*
    显示直角在右下方的等腰直角三角形
*/
#include <stdio.h>
int main(void) {
    int a;
    printf("请输入三角形的边长："); scanf("%d", &a);
    for (int i = 1; i <= a; i++) {
        for (int j = a; j > i; j--) {
            putchar(' ');
        }
        for(int k=1;k<=i;k++){
        	printf("*");
        }
        printf("\n");
    }
    return 0;
}