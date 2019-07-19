/*
字符串数组
*/
#include <stdio.h>
int main(void) {
    int i;
    char cs[][6] = {"turbo", "na", "dohc"};
    for (i = 0; i < 3; i++) {
      printf("cs[%d]=%s\n",i,cs[i] );// 打印的是字符串

    }

return 0;
}