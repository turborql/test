// 创建一个函数，返回三个int型整数中的最小值。
#include <stdio.h>
int min(int a, int b, int c) {
    int min = a;
    if (b < a)min = b;
    if (c < b)min = c;

    return min;
}
int main(void) {
printf("请输入三个整数：\n");
int a,b,c;
printf("1:");scanf("%d",&a);
printf("2:");scanf("%d",&b);
printf("3:");scanf("%d",&c);
printf("min:%d\n",min(a,b,c));

return 0;
}


