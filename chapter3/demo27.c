/*编写一段程序，输入三个整数，如果三个数都相等，则显示“三个值都相等”。如果其中任意两个值相等，则显示“有两个值相等”。如果上述两种情况都不满足，则显示“三个值各不相同”。*/
#include <stdio.h>
int main (void) {
    int a, b, c;
    printf("请输入三个整数：\n");
    printf("a:\n"); scanf("%d", &a);
    printf("b:\n"); scanf("%d", &b);
    printf("c:\n"); scanf("%d", &c);



    if (a == b && b == c ) {
        printf("三个值相等\n");
    }else {
          if(a==b){
          	
          }
          else if(a==c){

          }
          else if(b==c){

          }
          else{
          	printf("三个值都不相等\n");
          }

    }

    // if (a == b || b == c || a == c) {
    //     printf("两个值相等");
    // } else {
    //     printf("三个值各不相同\n");
    // }



    return 0;

}

