/*Beyond the implict assumption that the arrays are ordered, this implement
	assumes that the array c is disjoint from a and b.*/
	
mergeAB(Item c[], Item a[], int N, Item b[], int M){
	int i, j, k;
	for(i = 0, j = 0, k = 0; k < N+M; k++){
		if (i == N) {c[k] = b[j++]; continue;}
		if (j == M) {c[k] = z[i++]; continue;}
		c[k] = (less(a[i], b[j])) ? a[i++] : b[j++];
	}
}