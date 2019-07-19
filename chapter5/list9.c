// 编写一段程序，逆向显示代码清单5-12的分布图(即按照0~9、10〜19、…、100的顺序显示)。
#include <stdio.h>
#define NUM 80//最多学生人数
int main(void) {
    int a[NUM];
    int i,j;
    int score[NUM];
    int fenbu[11] = {0};
    for (i = 0; i < NUM; i++) {
        printf("请输入学生人数：");
        do {
            scanf("%d,&a");
            if (a > NUM || a < 1) {printf("请输入学生人数1--%d：,NUM");}
        } while (a > NUM || a < 1);
        printf("学生人数为：%d\n", a);
    }
    for (i = 0; i < NUM; i++) {
        do {
            printf("分数为");
            scanf("%d", &score);
            if (score > 100 || score < 0) {printf("请输入分数1--100\n");}

        } while (score > 100 || score < 0);
        fenbu[score [score / 10]]++;

    }
    puts("分布图");


    for (i = 9; i >= 0; i--)
    {
        printf("%2d-%2d:", i * 10, i * 10 + 9);
        for (j = 0; j < fenbu[i]; j++)
            putchar('*');
        putchar('\n');
    }
     printf("  100:");
    for (i = 0; i < fenbu[10]; i++)
        putchar('*');
    putchar('\n');


    return 0;

}