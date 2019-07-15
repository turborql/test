#include <stdio.h>
int main (void)
{
	int pos=0;
	int x=123;
	int y=456;
	printf("%d%n%d\n",x,&pos,y);
	printf("pos=%d\n",pos);
	return 0;
}