/*
    字符串数组
*/
#include <stdio.h>
int main(void){
	int i;
	char a[][5]={"lsp","c","eww"};
	char *p[]={"wd","wq","sdw"};
	for (i = 0; i < 3; i++)
        printf("a[%d] = \"%s\"\n", i, a[i]);
    for (i = 0; i < 3; i++)
        printf("p[%d] = \"%s\"\n", i, p[i]);
    return 0;
}