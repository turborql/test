/*
    依次把1、2、3、4、5赋值给数组的每个元素并显示
*/
#include <stdio.h>
int main(void) {
    int a[5];

    for (int i = 0; i < 5; i++) {
        printf("a[%d]:", i);
        scanf("%d", &a[i]);

    }
    printf("------------\n");
    for (int i = 0; i < 5; i++) {
        printf("a[%d]=%d\n", i, a[i] );


    }

    return 0;
}