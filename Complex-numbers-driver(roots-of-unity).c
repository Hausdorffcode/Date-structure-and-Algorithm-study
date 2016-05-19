//它声明Complex类型的变量，并给此类变量赋值，包括将它们用作函数参数和返回值
#include <stdio.h>
#include <math.h>
#include "COMPLEX.h"
#define  PI 3.141592625

int main (int argc, char *argv[]){
	
	int i, j, N = atoi(argv[1]);
	Complex t, x;
	printf("%dth copmlex roots of unity\n", N);
	
	for (i = 0; i < N; i++){
		float r = 2.0*PI*i/N;
		t = COMPLEXinit(cos(r), sin(r));
		printf("%2d %6.3f %6.3f ", i, Re(t), Im(t));
		
		for (x = t, j = 0; j < N - 1; j++){
			x = COMPLEXmult(t, x);
		}
		
		printf("%6.3f %6.3f\n", Re(x), Im(x));
	}
	
	return 0;
}