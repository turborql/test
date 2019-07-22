// 对代码清单4-18和代码清单4-19中的程序进行修改，分别显示出直角在左上方和右上方的等腰直角三角形（生成两个程序）。

//左上方

// #include <stdio.h>
// int main(void){
// 	int i,j;
// 	int a;
// 	int b=a+1;
// 	printf("请输入直角三角形的边长：");scanf("%d",&a);
// 	for(i=1;i<=a;i++){
// 		for(j=a-i+1;j>0;j--){
// 			putchar('*');
// 		}
// 		putchar('\n');
// 	}
// 	return 0;
// }

//右上方
#include <stdio.h>
int main(void){
	int i,j,a,x;
	printf("请输入边长：");scanf("%d",&a);
	for(i=1;i<=a;i++){
		for(x=0;x<i-1;x++)
			putchar(' ');
		for(j=a-i+1;j>0;j--)
		   putchar('*');
		
		putchar('\n');
	}
return 0;
}