//包含接口文件Item.h，在编译时可以发现接口与实现间的所有矛盾。
//实现示例，用double

#include <stdio.h>
#include <stdlib.h>
#include "Item.h"
double ITEMrand(void){
	return 1.0*rand()/RAND_MAX; //RAND_MAX是C中stdlib.h中宏定义的一个字符常量
}

int ITEMscan(double *x){
	return scanf("%f,", x);
}

void ITEMshow(double x){
	printf("%7.5f", x);
}