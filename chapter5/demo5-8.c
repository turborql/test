/*
    对数组的全部元素进行倒序排列
*/
#include <stdio.h>
int main(void) {
    int i;
    int a[7];
    for (int i = 0; i < 7; i++) {
        printf("a[%d]:", i );
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <= (7 / 2); i++) {
        int temp = a[i];
        a[i] = a[6 - i];
        a[6 - i] = temp;

    }
    puts("倒序后为：")
    for (int i = 0; i < 7; i++) {
        printf("a[%d]=%d\n", i, a[i] );
    }
    return 0;
}