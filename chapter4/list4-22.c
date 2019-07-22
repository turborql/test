// 对代码淸单4-17中的程序进行修改，显示出一个横向较长的长方形

// ※读取两个边的边长，以较小的数作为行数，以较大的数作为列数。
#include <stdio.h>
int main(void) {
    int a, b;
    int i, j;
    int weight,lenth;
    int retry;
    printf("请输入长方形的边长:\n"); 
    do{
    	scanf("%d%d", &a,&b);
    	if(a>b){
    		lenth=a;
    		weight=b;
    	}else{
    		weight=a;
    		lenth=b;
    	}
    	for (i = 1; i <= weight; i++) {
        for (j = 1; j <= lenth; j++) {
            putchar('*');
        }
        putchar('\n');

    }
    printf("是否要继续输入，yes---0;no---1\n");
    scanf("%d",&retry);
    
    }while(retry==0);
   

    


return 0;



}




