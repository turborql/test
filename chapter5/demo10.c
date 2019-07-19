/*
    输入5名学生的分数并显示出其中的最高分和最低分
*/
#include <stdio.h>

int main(void) {
    int a[5];
    int i = 0;
    for (i = 0; i < 5; i++) {
        printf("a[%d]：", i );
        scanf("%d", &a[i]);
    }
    int max = a[0];
    int min = a[0];
    for (i=1;i<5;i++) {
        if (a[i] > max) max=a[i];
        if (a[i] < min) min=a[i];

    }
    printf("max:%d\n", max);
    printf("min:%d\n", min );

    return 0;
}