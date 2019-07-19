/*
    输入5名学生的分数并显示出他们的总分和平均分
*/
#include <stdio.h>
int main(void) {
    int a[5];
    int sum=0;
    for (int i = 0; i < 5; i++) {
        printf("a[%d]:", i);
        scanf("%d", &a[i]);
    }
    for(int i=0;i<5;i++){
        sum=sum+a[i];

    }
    printf("sum:%d;average:%f\n",sum, (double)sum/5);

return 0;
}