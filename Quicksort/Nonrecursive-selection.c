/*A nonrecursive implementation of selection simply does a partition, then
	moves the left pointer in if the partition fell to the left of the position
	sought, or moves the right pointer in if the partition fell to the right of 
	the position sought.*/
	
select(Item a[], int l, int r, int k){
	while(r > l){
		int i = partition(a, l, r);
		if (i <= k) l = i+1;
		if (i >= k) r = i-1;
	}
}