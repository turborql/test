// 编写函数adjust_point，如果n指向的值小于0,就将其改为0:如果值大于100,就将其改为100(如果是0〜100的值，则不修改)。

/* #include <stdio.h>
void  adjust_point(int *n) {
    if(*n<0)printf("0\n");
    if(*n>100)printf("100\n");
    if(*n>=0 && *n<=100)printf("%d\n",*n );
}
int main(void) {
    int n;
    printf("请输入一个整数："); scanf("%d", &n);
    adjust_point(&n);
    return 0;
}*/
#include <stdio.h>
void adjust_point(int *n) {
    if (*n > 100) {
        *n = 100;
    } else if (*n < 0) {
        *n = 0;
    }
}
int main(void) {
    int n;
    printf("请输入一个整数："); scanf("%d", &n);
    adjust_point(&n);
    printf("整数被修改后为：%d\n", n );
}