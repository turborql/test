// 编写一段程序，读取数组中的数据个数和元素值并显示。显示时，各值之间用逗号和空格分割，并用大括号将所有值括起来。
// 注意利用对象式宏来声明数组的元素个数，如代码清单5-12那样。
#include <stdio.h>
#define NUM 4
int main(void) {
    int a[NUM];
    int i;
    printf("数据个数：%d\n", NUM );
    for (i = 0; i < NUM; i++) {

        printf("%d号:", i + 1);
        scanf("%d", &a[i]);
    }
    putchar('{');
    for (i = 0; i < NUM; i++) {
        printf("%d,", a[i] );//怎么去掉最后一个逗号？
    }
    putchar('}');
    return 0;
}
