//Note that id N is even and k is N/2, then the node at k has only one child.
/*The inner loop in this program has two distinct exits: one for the case that
the heap condition is satisfied somewhere in the interior of the heap. It is a 
prototypical example of the need for the break construct.*/
//N is size of heap

fixDown(Item a[], int k, int N){
	int j;
	while(2*k <= N){
		j = 2*k;
		if (j < N && less(a[j], a[j+1]) j++;
		if (!less(a[k], a[j]) break;
		exch(a[k], a[j]);
		k = j;
	}
}
