/*
    根据读取的整数值显示所出的拳（只接收0、1、2）
*/
#include <stdio.h>
int main (void) {
    int hand ;
    do {
        printf("请选择输入什么拳：\n");
        scanf("%d", &hand);

    } while (hand >= 2 || hand <= 0);

    // !(hand <=2 && hand >=0)
    printf("你选择了：");
    switch (hand) {
    case 1: puts("输出的是剪刀");break;
    case 2: puts("输出的是石头");break;
    case 3: puts("输出的是布");break;
    default : puts("输出的不是拳！");break;

        return 0;



    }
}

