// 使用代码清单6-3中的sqr函数创建另一个函数，返回int型整数的四次幂。
#include <stdio.h>
int sqr(int a){
	return (a*a*a*a);
}
int main(void) {
    int a;
    printf("请输入一个整数："); scanf("%d", &a);
    printf("四次幂为：%d\n",sqr(a) );
    return 0;
}