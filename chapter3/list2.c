// 用三种方法实现1到100的和
#include <stdio.h>
int main(void) {
    // int i;
    // int sum=0;
    // for (i = 1;i <= 100;i++) {
    //     sum += i;

    // }
    // printf("和为：%d\n", sum);


    /*int i=1;
    int sum=0;
    while(i<=100){
    	sum=sum+i;
    	i++;
    }
    printf("和为%d\n",sum);*/
    int i = 1;
    int sum = 0;

    do {
        sum = sum + i;
        i++;
    } while (i <= 100);
    printf("he:%d\n", sum);


    return 0;
}