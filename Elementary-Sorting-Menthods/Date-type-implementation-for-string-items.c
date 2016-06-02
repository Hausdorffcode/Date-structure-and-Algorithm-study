//实现示例string
//A string is an array of pointers to characters,rearranging them so the indicated strings are in alpanumeric order.
//We statically allocate the storage buffer containing the string characters in this modules; dynamic allocation is perhaps more appropriate.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Item-for-string.h"
static char buf[100000];
static int cnt = 0;
int ITEMscanf(char**x){
	int t; 
	*x = &buf[cnt];
	t = scanf("%s", *x);
	cnt += strlen(*x) + 1;
	return t;
}

void ITEMshow(char *x){
	printf("%s ", x);
}