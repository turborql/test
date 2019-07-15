/*
    计算所输入的两个整数中的较大数和较小数并显示
*/
# include <stdio.h>
int main(void) {
    int a, b, min, max;
    printf("请输入两个整数：\n");
    printf("a:\n"); scanf("%d", &a);
    printf("b:\n"); scanf("%d", &b);


    if (b > a) {min = a; max = b;}
    else {min = b; max = a;}


    printf("最大值为%d,最小值为%d\n", max, min );



    return 0;
}