//It takes an integer N and a floating-pointer number p from the command line, computes (x+1)^N, 
//and checks the results by evaluating the resulting polynomial at x=p.

#inlcude <stdio.h>
#include <stdlib.h>
#inlcude "POLY.h"

int main (int argc, char *argv[]){
	int N = atoi(argv[1]);
	float p = atof(argv[2]);
	Ploy t, x;
	int i, j;
	printf("Binomial coefficients\n");
	
	t = POLYadd(POLYterm(1, 1), POLYterm(1, 0));
	for (i = 0, x = t; i < N; i++){
		x = POLYmult(t, x);
		showPOLY(x);
	}
	printf ("%f\n", POLYeval(x, p));
	return 0;
}