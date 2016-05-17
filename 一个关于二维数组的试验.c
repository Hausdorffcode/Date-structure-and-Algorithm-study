#include <stdio.h>

int main(){
	int a[10][10];
	int i,  j;
	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
			a[i][j] = i + j;
		}
	}
	printf("%d,  %d\n", a[1][1], a[11]);
	return 0;
}