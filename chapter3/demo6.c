/*
输入的整数是否为0

*/
/*#include <stdio.h>
int main(void) {
    int a;
    printf("请输入一个整数：");
    scanf("%d", &a);
    if (a == 0)printf("a是0\n");
    else printf("a不是0\n");
    return 0;
}*/
#include <stdio.h>
int main (void) {
    int a ;
    printf("请输入一个整数：\n");
    scanf("%d",& a);
    if (a) {
        puts("该整数不是0");
    } 
    else {
        puts("该整数是0");
    }
}
