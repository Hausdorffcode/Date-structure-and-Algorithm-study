/*This program is set up to sort b, leaving the result in a.
	Thus, the recursive calls are written to leave  their results in b,
	and we use Program 8.1 to merge those files form b into a. In this 
	way, all the date movemont is done during the course of the merges.*/
	
Item aux[maxN];
void mergesortABr(Item a[], Item b[], int l, int r){
	int m = (l+r)/2;
	if (r-l <= 10) {insertion(a, l, r); return;}
	mergesortABr(b, a, l, m);//递归调用中切换参数，消去显式的数组复制
	mergesortABr(b, a, m+1, r);
	mergeAB(a+l, b+l, m-l+1, b+m+1, r-m);
}

void mergesortAB(Item a[], int l, int r){
	int i; 
	for (i = l; i < r; i++)
		aux[i] = a[i];
	mergesortABr(a, aux, l, r);
}