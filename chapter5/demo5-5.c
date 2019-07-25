/*
    从头开始依次使用1、2、3、4、5对数组各元素进行初始化并显示
*/
#include <stdio.h>
int main(void) {
    int a[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {

        printf("a[%d]=%d\n", i, a[i]);

    }

    return 0;

}