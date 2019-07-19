/*
    输入5名学生的分数并显示出他们的总分和平均分（宏）
*/
#include <stdio.h>
#define NUMBER 5/*学生人数*/
int main(void) {
	

    int a[NUMBER];
    int sum = 0;

    for (int i = 0; i < NUMBER; i++) {
        printf("a[%d]:", i );
        scanf("%d", &a[i]);


    }

    for (int i = 0; i < NUMBER; i++) {
        sum = sum + a[i];
    }
    printf("sum:%d;average:%f\n",sum,(double)sum/NUMBER );
return 0;

}