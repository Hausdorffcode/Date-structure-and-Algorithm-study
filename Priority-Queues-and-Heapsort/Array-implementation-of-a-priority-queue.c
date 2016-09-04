//Keep the items in an unorder array. Items are added to and removed from the end of the array.

#include <stdlib.h>
#include "Item.h"
static int N;

void PQinit (int maxN){
	pq = malloc(maxN*sizeof(Item));
	N = 0;
}

int PQempty(){
	return N == 0;
}

void PQinsert(Item v){
	pq[N++] = v;
}

Item PQdelmax(){
	int j, max = 0;
	for (j = 1; j < N; j++){
		if (less(pq[max], pq[j])) max = j;
	}
	exch(pq[max], pq[N-1]);
	return pq[--N];
}