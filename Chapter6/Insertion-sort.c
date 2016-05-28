//1. It first puts the smallest element in the array into the first position, so that that element can serve as sentinel
//2. It does a single assignment, rather than an exchange, in the inner loop
//3. It terminates the inner loop when the element being inserted is in position.
//adaptive insertion sort
void insertion(Item a[], int l, int r){
	int i;
	for (i = r; i > l; i--){
		compexch(a[i-1], a[i]);
	}
	
	for (i = l+2; i <= r; i++){
		int j = i;
		Item v = a[i];
		while(less(v, a[j-1]){
			a[j] = a[j-1];
			j--;
		}
		a[j] = v;
	}
}