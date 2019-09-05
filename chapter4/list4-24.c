  // 编写一段程序，输入一个整数，显示出输入整数层的金字塔形状。 提示：第i行显示 (i - 1) * 2 + 1 个 ‘*’。
#include <stdio.h>
int main(void) {
    int i, j, k, h, a;
    printf("请输入一个整数："); scanf("%d", &a);
    for (i = 1; i <= a; i++) {
        for (j = a - i; j > 0; j--) {
            putchar(' ');
        }
        for (k = 1; k <= (i - 1) * 2 + 1; k++) {
            putchar('*');
        }
        // for (h = a - i; h > 0; h--) {
        //     putchar(' ');
        // }
        printf("\n");
    }

    return 0;
}