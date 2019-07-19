#include <stdio.h>
int main(void){
    int i,j;
    int sum[4][3];
    int fenshu1[4][3]={{91,43,24},{56,78,97},{67,87,6},{76,87,89}};
    int fenshu2[4][3]={{45,78,98},{67,87,65},{67,89,67},{78,76,97}};
    puts("第一次考试分数");
    for (i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("%4d\n", fenshu1[i][j]);  
        }
    }
    puts("第二次考试分数");
    for (i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("%4d\n", fenshu2[i][j]);  
        }
    }
   puts("总分");
   for(i=0;i<4;i++){
    for (j= 0; j< 3; j++){
        sum[i][j]=fenshu1[i][j]+fenshu2[i][j];

    }
   }
   for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%4d", sum[i][j]);
        putchar('\n');
    }
 
}