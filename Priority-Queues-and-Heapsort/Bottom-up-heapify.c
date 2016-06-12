/*To restore the heap condition when a node's priority is increased, we
move up the heap, exchanging the node at position k with its parent (at
position k/2) if necessary, continuing as long as a[k/2]<a[k] or until 
we reach the top of the heap.*/

fixUp(Item a[], int k){
	while (k > l && less(a[k/2], a[k])){
		exch(a[k], a[k/2]);
		k = k/2;
	}
}