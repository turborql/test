
// 对代码清单5-3中的程序进行修改，从头顺次为数组中的元素赋值5、4、3、2、1。
// #include <stdio.h>
// int main(void) {
//     int a[5];
//     for (int i = 0; i < 5; i++) {
//         printf("a[%d]:",i);
//         scanf("%d",&a[i]);
//     }
//     for(int i=0;i<5;i++)
//     printf("a[%d]=%d\n",i,a[i]);

// }

#include <stdio.h>
int main(void) {
    int a[5];
    int i;
    for (i = 0; i < 5; i++) {
    	a[i]=5-i;
    	printf("a[%d]=%d\n",i,a[i]);
    }
    return 0;
}