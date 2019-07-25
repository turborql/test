/*
通过指针间接的操作身高
*/
#include <stdio.h>
int main(void){
	int a=178;//a的身高
	int b=175;//b的身高
	int c=179;//b的身高
	int *d,*e;
	d=&a;//d指向a
	e=&c;//e指向c
	printf("a的身高%d\n",*d);
	printf("c的身高%d\n",*e);
	d=&b;//d指向b
	*e=180;//将e指向的c赋值为180
	putchar('\n');
	printf("a的身高%d\n",a);
	printf("b的身高%d\n",b);
	printf("c的身高%d\n",c);
	printf("a的身高%d\n",*d);
	printf("c的身高%d\n",*e);

return 0;
}