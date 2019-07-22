//阶乘
#include <stdio.h>
int main(void){
int n;
printf("请输入一个整数：");
scanf("%d",&n);
int fact=1;

// while(i<=n){
// 	fact*=i;
// 	i++;
// }
// printf("%d!=%d\n",n,fact);
// return 0;

for(int i=2;i<=n;i++){
	fact*=i;
}
printf("%d!=%d\n",n,fact);
return 0;


}

