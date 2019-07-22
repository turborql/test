//正序分解整数
//逆序
#include <stdio.h>
int main(void) {
    int a;
    printf("请输入一个整数："); scanf("%d", &a);
    do {
        int b = a % 10;
        printf("%d", b );
        if(a>=10){
        	printf("  ");
        }
        a/= 10;
    } while (a > 0);
    return 0;
}