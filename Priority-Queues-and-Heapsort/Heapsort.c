/*The pointer pq to a[l-1] allows the code to treat the subarray pass
to it as an array representation of the complete tree*/

void heapsort(Item a[], int l, int r){
	int k, N = r-l+1;
	Item* pq = a+l-1;
	for (k = N/2; k >= 1; k--)
		fixDown(pq, k, N);
	while (N > 1){
		exch(pq[[1], pq[N]);
		fixDown(pq, 1, --N);
	}
}

