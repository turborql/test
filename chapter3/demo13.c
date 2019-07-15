/*输入两个整数，若相等，则显示“A和B相等”。
如果A大于B,则显示“A大于B。”。如果A小于B,则显示“A小于B。*/
#include <stdio.h>
int main (void ) {
    int a, b;
    printf("请输入两个整数：\n");
    printf("整数a:\n");scanf("%d",&a);

    printf("整数b:\n");scanf("%d",&b);
    
    if (a == b)printf("a等于b\n");
    else if (a > b)
        printf("a大于b\n");
    else printf("a小于b\n");
    return 0;

}