/*
    递增显示从0到输入的正整数为止的各个整数
*/
#include <stdio.h>
int  main(void) {
    int a;
    printf("请输入一个正整数a:");
    scanf("%d",&a);
    int i=0;
    while(a>=i){
     
      printf("%d\n",i++);


    }


    




    return 0;
}