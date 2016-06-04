/*This procedure partitions an array about the (k-l)th smallest element
	(the one in a[k]):It rearranges the array to leave a[l],...,a[k-1]
	less than or equal to a[k], and a[k+1],...,a[r] greater than or equal 
	to a[k].*/
select(Item a[], int l, int r, int k){
	int i;
	if (r <= l) return;
	i = partition(a, l, r);
	if (i > k) select(a, l, i-1, k);
	if (i < k) select(a, i+1, r, k);
}