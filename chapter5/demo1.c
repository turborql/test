// 依次输入5名学生的分数，显示出他们的总分和平均分。具体程序如代码清单5-1所示。
#include <stdio.h>
int main(void) {

    int a[5];
    int i = 0;
    int sum=0;

    for (; i < 5; i++) {
        printf("a[%d]:", i );
        scanf("%d", &a[i]);
    }
    for (i=0; i < 5; i++) {
    	
         sum=sum+a[i];
         printf("总分为%d,平均分为%f\n",sum ,(double)sum/i);


    }


    return 0;
}