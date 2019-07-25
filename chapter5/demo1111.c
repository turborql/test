/*
    输入学生的分数并显示出分布情况

*/
#define NUM 5//学生人数上限
#include <stdio.h>
int main(void) {
    int a[NUM];
    int i = 0;
    for (i = 0; i <= NUM; i++) {
        printf("a[%d]:", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= NUM; i++) {
        printf("分数为%d\n", a[i] );

    }
    switch (a[i] / 10) {
    case 10:
    case  9: printf("优秀\n"); 
    case  8:
    case 7:
    case 6: printf("及格\n");
    case 5:

    case 3:
    case 2:
    case 1:
    case 0: printf("不及格\n"); break;
    default : printf("输入的分数错误\n");

    }
    return 0;
}