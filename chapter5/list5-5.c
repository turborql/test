// 对代码清单5-8中的程序进行修改，改为用对象式宏来定义元素个数。注意需要找到有关元素交换次数的规则。
#include <stdio.h>
#define NUM 7
int main(void) {


    int i;
    int a[NUM];
    for (i = 0; i < NUM; i++) {
        printf("a[%d]:", i );
        scanf("%d", &a[i]);
    }
    for (i = 0; i < NUM; i++) {
        printf("a[%d]=%d\n", i, a[i]);
    }
    for (i = 0; i < NUM / 2; i++) {
        int temp = a[i];
        a[i] = a[NUM - i];
        a[NUM - i] = temp;
    }

    printf("-----------\n");
    for (i = 0; i < NUM; i++) {
         printf("a[%d]= %d\n",i,a[i] );



    }






    return 0;
}