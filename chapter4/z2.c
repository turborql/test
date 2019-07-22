//素数
#include <stdio.h>
int main(void) {
    int a;
    printf("请输入一个数：");
    scanf("%d", &a);
    int isprime = 1;
    for (int i = 2; i < a; i++) {
        if (a % i == 0) {
            isprime = 0;
            break;
        }
    }
    if (isprime == 1) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    return 0; 

}