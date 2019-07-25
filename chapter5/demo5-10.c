/*
    输入5名学生的分数并显示出他们的总分和平均分（宏）
*/
#include <stdio.h>
#define NUM 5
int main(void) {
    int i;
    int a[NUM];//score
    int sum = 0;
    printf("请输入学生的分数\n");
    for (i = 0; i < NUM; i++) {
        printf("a[%d]号：", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < NUM; i++) {
        sum = sum + a[i];
    }
    printf("总分：%d,平均分：%.2f\n", sum, (double)sum / NUM );
    return 0;
}