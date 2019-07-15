/*
  输入的整数是奇数还是偶数呢（按照自己的意愿进行循环操作）


*/
/*# include <stdio.h>
int main(void){
int a ;
printf("请输入一个整数：\n");
 scanf("%d",&a);
 if (a%2){
 	printf("输入的是奇数\n");
 }else {
 	printf("输入的是偶数\n");
 }
return 0;
}*/

#include <stdio.h>
int main (void) {
    int a,retry;

    do {
        printf("请输入一个整数：\n");
        scanf("%d", &a);
        if (a % 2) {
            printf("输入的是奇数\n");
        } else {
            printf("输入的是偶数\n");
        }

        printf("是否需要重新输入：\n");
        scanf("%d",&retry);
    } while (retry==0);

}

