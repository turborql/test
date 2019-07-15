/*
    显示所输入的整数除以3的余数
*/
# include <stdio.h>
int main (void) {
    int a;
    printf("请输入一个整数\n");
    scanf("%d", &a);
    if (a % 3 == 0) {
        printf("能被3整除\n");
    } else if (a % 3 == 1) {
        puts("余数是1");
    } else {
        puts("余数是3");


    }
return 0;
}