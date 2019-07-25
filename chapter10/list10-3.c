// 编写如下函数，将n1、n2、n3指向的三个int型整数按升序排列。
#include <stdio.h>
int min(int *a, int *b, int *c) {
    int min ;
    min = *a;
    if (*b < min)min = *b;
    if (*c < min)min = *c;
    return min;
}
int  max(int *a, int *b, int *c) {
    int max = *a;
    if (*b > max)max = *b;
    if (*c > max)max = *c;
    return max;
}
int main(void) {
    int a, b, c;
    printf("请输入三个整数：\n");
    printf("整数1:"); scanf("%d", &a);
    printf("整数2:"); scanf("%d", &b);
    printf("整数3:"); scanf("%d", &c);
    printf("输入的三个整数按升序排列为：\n");
    printf("%d\n", min(&a, &b, &c));
    printf("%d\n", a + c + b - min(&a, &b, &c) - max(&a, &b, &c) );
    printf("%d\n", max(&a, &b, &c) );
    return 0;

}
//第二种方法
/*
	编写如下函数，将n1、n2、n3指向的三个int型整数按升序排列。

#include <stdio.h>
void swap(int *na, int *nb) {
    int temp;
    temp = *na;
    *na = *nb;
    *nb = temp;
}

void sort3(int *n1, int *n2, int *n3) {
    if (*n1 > *n2) {
        swap(n1, n2);
    }
    if (*n2 > *n3) {
        swap(n2, n3);
        if (*n1 > *n2) {
            swap(n1, n2);
        }
    }

}
int main(void) {
    int x, y, z;

    printf("请输入三个整数：\n");

    printf("整数A：");
    scanf("%d", &x);
    printf("整数B：");
    scanf("%d", &y);
    printf("整数C：");
    scanf("%d", &z);

    sort3(&x, &y, &z);
    printf("整数A：%d\n", x);
    printf("整数B：%d\n", y);
    printf("整数C：%d\n", z);
    return 0;
}
*/