/*
    输入一个整数，显示出该整数个 *（循环次数可以任意指定）
*/
// #include <stdio.h>

// int main(void)
// {
//     int a;
//     printf("请输入一个整数：");scanf("%d",&a);
//     for(int i=1;i<=a;i++){
//         putchar('*');
//     }
//     return 0;
// }
#include <stdio.h>
int main(void) {
    int retry;
    do {
        int i, no;
        do {
            printf("请输入一个正整数："); scanf("%d", &no);
            if (no <= 0) {
                printf("请不要输入非正整数。\n");
            }
        } while (no <= 0);

        for (i = 1; i <= no; i++) {
            putchar('*');
        }
        putchar('\n');
        printf("是否继续执行？yes-----0;no-----1\n");
        scanf("%d",&retry);
    } while (retry == 0);
}