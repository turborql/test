/*
    显示直角在右下方的等腰直角三角形
*/
#include <stdio.h>

int main(void) {
    int i, j,k, a;
    printf("请输入等腰直角三角形的边长："); scanf("%d", &a);
    for (i = 1; i <= a; i++) {

        // for (j=1;j<=a-i;j++){
        //     putchar(' ');
        // }
        for(j=a-i;j>0;j--){
            putchar(' ');
        }

        for (j = 1; j <= i; j++) {
            
            putchar('*');

        }
        // putchar('\n');
        printf("\n");
    }

    return 0;
}