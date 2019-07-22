/*
    显示直角在左下方的等腰直角三角形
*/
#include <stdio.h>

int main(void) {
    int i, j, a;
    printf("请输入等腰直角三角形的边长："); scanf("%d", &a);
    for (i = 1; i <= a; i++) {
        for(j=1;j<=i;j++){
            putchar('*');
        }
          putchar('\n');
    }

return 0;
}