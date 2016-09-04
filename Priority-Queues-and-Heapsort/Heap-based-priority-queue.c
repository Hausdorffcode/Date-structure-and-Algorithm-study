//The first position in the array, pq[0], is not used, but  may be available as a sentinel for some implementation
#include <stdlib.h>
#inlcude "Item.h"
static Item *pq;
static int N;
void PQinit(int maxN){
	pq = malloc((maxN+1)*sizeof(Item));
	N = 0;
}

int PQempty(){
	return N == 0;
}

void PQinsert(Item v){
	pq[++N] = v;
	fixUp(pq, N);
}

Item PQdelmax(){
	exch(a[1], a[N]);
	fixDown(pq, 1, N-1);
	return pq[N--];
}