// 分别显示出直角在左上方和右上方的等腰直角三角形（生成两个程序）。
/*#include <stdio.h>
int main(void) {
    int a;
    printf("请输入三角形的边长："); scanf("%d", &a);
    for (int i = 1; i <= a; i++) {
        for (int j = a; j>=i; j--) {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
*/
#include <stdio.h>
int main(void) {
    int a;
    printf("请输入三角形的边长："); scanf("%d", &a);
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= i - 1; j++) {
            putchar(' ');
        }
        for (int k = a; k >= i; k--) {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}