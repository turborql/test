/*
    计算幂求a的b次幂
*/
#include <stdio.h>
// double power(double a, int b) {
//     double temp = 1.0;
//     while (n-- > 0)
//         temp *= a;
//     return temp;
// }
double power(double a, int b) {
    int i;
    double temp = 1.0;
    for (i = 1; i <= b; i++) {
        temp *= a;
    }
    return temp;
}
int main(void) {
    double a;
    int b;
    puts("求a的b次幂");
    printf("实数："); scanf("%lf", &a);
    printf("整数："); scanf("%d", &b);
    printf("%.2f的%d次方幂:%.2f\n", a, b, power(a, b) );
    return 0;
}
