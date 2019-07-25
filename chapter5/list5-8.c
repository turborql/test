// 编写一段程序，逆向显示代码清单5-12的分布图(即按照0~9、10〜19、…、100的顺序显示)。
#include <stdio.h>
#define NUM 8//最多学生人数
int main(void) {
    int a;//学生人数
    int i, j;
    int score[NUM];
    int fenbu[11] = {0};
    
        printf("请输入学生人数：");
        //限制学生人数范围
        do {
            scanf("%d",&a);
            if (a > NUM || a < 1) {printf("请输入学生人数1--%d：",NUM);}
        } while (a > NUM || a < 1);
        
    //限制分数范围
    for (i = 0; i < NUM; i++) {
        printf("%2d号",i+1);
        do {
            
            scanf("%d", &score[i]);
            if (score[i] > 100 || score[i]< 0) {printf("请输入分数1--100\n");}

        } while (score[i] > 100 || score[i] < 0);
        fenbu[score[i] / 10]++;

    }
    puts("分布图");

    for (i = 1; i <= 9; i++) {
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