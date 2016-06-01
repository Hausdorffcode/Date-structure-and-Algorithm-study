/*If the array has one or fewer elements, do nothing. Otherwise, the array is processed by 
	a partition procedure, which puts a[i] into position for some i between l and r inclusive,
	and rearrangs the other elements such that the recursive calls properly finish the sort.*/
	
int partition(Item a[], int l, int r);
void quicksort(Item a[], int l, int r){
	int i;
	if (r <= 1) return;
	i = partition(a, l, r);
	quicksort(a, l, i-1);
	quicksort(a, i+1, r);
}
