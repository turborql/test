/*
    把数组中的全部元素复制到另一个数组中
*/
#include <stdio.h>

int main(void) {
    int i;
    int a[5] = {17, 23, 36};
    int b[5];
    for (i = 0; i < 5; i++) {

        printf("a[%d]= %d\n", i, a[i]);

    }
    

    puts("--------");

    for (i = 0; i < 5; i++) {

        b[i] = a[i];
        printf("b[%d]=%d\n", i, b[i] );

    }





}