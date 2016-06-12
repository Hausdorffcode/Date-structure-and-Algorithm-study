//This sorting algorithm runs in time proportional to NlgN, but uses extra space proportional to the number of items to be sorted(for the priority)
void PQsort(Item a[], int l, int r){
	int k;
	PQinit();
	for (k = l; k <= r; k++) PQinsert(a[k]);
	for (k = r; k >= l; k--) a[k] = PQdelmax();
} 