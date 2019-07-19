// 编写一段程序，读取数组中的数据个数和元素值并显示。显示时，各值之间用逗号和空格分割，并用大括号将所有值括起来。
// 注意利用对象式宏来声明数组的元素个数，如代码清单5-12那样。
// #include <stdio.h>
// #define NUM 5
// int main(void) {
//     int a[NUM];
//     for (int i = 0; i < NUM; i++) {
//         printf("a[%d]:", i );
//         scanf("%d", &a[i]);
//     }
//     for(int i=0;i<NUM;i++){

//     	printf("a[%d]:%d\n",i,a[i] );
//     }

// return 0;
// }

#include <stdio.h>
#define NUM 5
int main(void) {
    int a[NUM] = {2, 3, 4, 5, 6};
    putchar('{');
    for (int i = 0; i < NUM; ++i)
    {
    	printf("a[%d]:%d,    ",i,a[i] );
    }
    putchar('}');





                 return 0;
}
