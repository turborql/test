/*
    画一个长方形
*/
#include <stdio.h>
int main(void) {
	int heigth,width;
    printf("请输入长："); scanf("%d", &heigth);
    printf("请输入宽："); scanf("%d", &width);
    if (heigth < width) {
        int temp = heigth;
        heigth = width;
        width = temp;
    };
    for (int i = 1; i <= width; i++) {
        for (int j = 1; j <= heigth; j++) {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}