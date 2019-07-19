/*
    输入学生的分数并显示出分布情况

*/
#include <stdio.h>
#define NUM 5//最多的学生人数
int main(void) {
    int a;
    int j;
    int bunpu[11] = {0};
    printf("学生人数："); scanf("%d", &a);

    do {
        if (a > NUM || a < 1) {

            printf("请输入1--%d的学生人数\n", a );
        }
    } while (a > NUM || a < 1);
    printf("输入的学生人数为：%d\n", a );


    int  score;
    for (int i = 1; i <= a; i++) {

        do {
            printf("请输入分数：%d号", i);
            scanf("%d", &score);
            if (score > 100 || score < 0) {
                printf("请输入1--100之间的分数\n");
            }
        } while (score > 100 || score < 0);

    }
    puts("\n---分布图---");
    printf(" 100:\n");
    for (j = 0; j < bupu[10]; j++)
        for (j = 0; j < bunpu[10]; j++)
            putchar('*');
    putchar('\n');



}