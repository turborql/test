// 编写一段程序，输入一个整数，显示出输入整数层的金字塔形状。 提示：第i行显示 (i - 1) * 2 + 1 个 ‘*’。
#include <stdio.h>
int main(void) {
    int a;
    printf("请输入金字塔的层数："); scanf("%d", &a);
    for (int i = 1; i <= a; i++) {
        for (int j = a - 1; j >= i; j--) {
            putchar(' ');
        }
        for (int k = 1; k <= i; k++) {
            putchar('*');
        }
        for (int x = 1; x <=i - 1; x++) {
            putchar('*');

        }
        putchar('\n');
    }
    return 0;
}