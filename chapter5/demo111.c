/*
    输入学生的分数并显示出分布情况
*/
#include <stdio.h>
#define NUMER 80
int main(void) {
    int i, j;
    int num;//实际的人数
    int tensu[NUMER];//fenshu
    int bunpu[11] = {0}; //分布图
    printf("请输入学生人数：");
    // 输入1-80之间的学生人数
    do {
        scanf("%d", &num);
        if (num > NUMER || num < 1) {printf("请输入1-%d的人数\n", NUMER);}
    } while (num > NUMER || num < 1);
    // 输入1-100之间的分数
    printf("请输入%d号的分数：", num);
    for (i = 0; i < num; i++) {
        do {
            scanf("%d", &int tensu[i]);
            if (tensu[i] > 100 || tensu[i] < 0) {printf("请输入1-100之间的分数。\n");}
        } while (tensu[i] > 100 || tensu[i] < 0);
        // bunpu[tensu[i] / 10];
    }

}