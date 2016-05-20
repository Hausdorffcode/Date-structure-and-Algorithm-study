//有了对象handles，通过ADT对象可以构建复合数据结构
//如这个实例客户程序中的队列的数组
//它模拟等待服务的客户被随机分配给M个服务队列中的一个

#include <stdio.h>
#include <stdlib.h>
#include "Item.h"
#include "First-class-ADT-interface-for-queues.h"
#define M 10

int main (int argc, char *argv[]){
	int i, j, N = atoi(argv[1]);
	Q queues[M];
	
	for (i = 0; i < M; i++){
		queues[i] = QUEUEinit(N);
	}
	
	for (i = 0; i < N; i++){
		QUEUEput(queues[rand() % M], i);
	}
	
	for (i = 0; i < M; i++, printf("\n")){
		for (j = 0; !QUEUEempty(queues[i]); j++){
			printf("%3d ", QUEUEget(queues[i]));
		}
	}
	
	return 0;
}
