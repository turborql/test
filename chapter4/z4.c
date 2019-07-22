//求前n项的和

// #include <stdio.h>
// int main(void) {
//     int i = 1;
//     double sum = 0.0;
//     int n;
//     printf("请输入一个整数："); scanf("%d", &n);
//     for (i = 1; i <= n; i++) {
//         sum = sum + 1.0 / i;
//     }
//     printf("f(%d)=%f\n", n,sum );
//     return 0;
// }


#include <stdio.h>
int main(void) {
    int i = 1;
    double sum = 0.0;
    int n;
    int sign=1;//double sign=1.0
    printf("请输入一个整数："); scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum = sum + sign*1.0 / i;//sum+=sign*1/i;
        sign=-sign;
        
    }
    printf("f(%d)=%f\n", n,sum );
    return 0;
}