// 对代码清单5-3中的程序进行修改，从头顺次为数组中的元素赋值0、1、2、3、4。
#include <stdio.h>
int main(void){
int a[5];
for(int i=0;i<5;i++){
     a[i]=i;
}


for(int i=0;i<5;i++){
printf("a[%d ]=%d\n",i,a[i]);



}

return 0;

}