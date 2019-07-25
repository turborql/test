/*
    输入5名学生的分数并显示出其中的最高分和最低分
*/
#include <stdio.h>
#define NUM 5//student's number
int main(void) {
    int a[NUM];//score
    int i,max,min;
    for (i = 0; i < NUM; i++) {
        printf("a[%d]号:\n", i + 1 );
        scanf("%d", &a[i]);
    }
    min=max=a[0];//同时把a[0]赋给最大最小.只对赋值可以，变量声明必须分开书写
    for(i=0;i<NUM;i++){
        if(a[i]<min)min=a[i];
        if(a[i]>max)max=a[i];
    }
    printf("最高分：%d,最低分：%d\n",max,min );
    return 0;
}

