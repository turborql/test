
// 对代码清单5-6中的程序进行修改，将数组a中的元素按照倒序复制到数组b中。
#include <stdio.h>

int main(void) {
    int i;
    int a[5] = {17, 23, 36};
    int b[5];
    for (i = 0; i < 5; i++) {
        printf("a[%d]=%d\n", i, a[i] );


    }
    for (i = 0; i < 3; i++) {
        int temp = a[i];
        a[i] = a[4 - i];
        a[4 - i] = temp;
    }

    for (i = 0; i < 5; i++) {
        b[i] = a[i];

    }

    printf("倒序排列了\n");
    for (i = 0; i < 5; i++) {
        printf("b[%d]=%d\n", i, b[i] );



    }
    return 0;

}