/*
    对数组的全部元素进行倒序排列
*/
#include <stdio.h>

int main(void) {
    int i;
    int a[7];
    for (i = 0; i < 7; i++) {
        printf("a[%d]:", i );
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 3; i++) {
        int temp = a[i];
        a[i] = a[6-i];
        a[6-i] = temp;
    }



    puts("---------------");
    for(i=0;i<7;i++){
printf("a[%d]=%d\n",i,a[i] );


    }

    return 0;
}
