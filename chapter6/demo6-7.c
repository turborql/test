/*
   显示出一个直角在左下方的等腰直角三角形（函数）
*/
#include <stdio.h>
void put_star(int a) {

    while(a-- >0){
    	putchar('*');
    }
}
int main(void) {
    int i, j, a;
    printf("请输入三角形的边长:"); scanf("%d", &a);
    for (i = 1; i <= a; i++) {
        put_star(i);
        putchar('\n');
    }
    return 0;
}