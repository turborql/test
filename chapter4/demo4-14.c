/*
    显示输入的整数值以下的偶数
*/
// #include <stdio.h>

// int main(void) {
//     int a,i;
//     printf("请输入一个整数："); scanf("%d", &a);
//     for(i=0;i<=a;i++)
//     if(i%2==0){
//        printf("%d\n",i );
//     }
//     return 0;
// }
#include <stdio.h>
int main(void){
	int i,n;
	printf("请输入整数值：");scanf("%d",&n);
	for(i=2;i<=n;i+=2)
		printf("%d",i );
	putchar('\n');
	return 0;
}
