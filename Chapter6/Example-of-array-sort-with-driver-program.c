//
#include <stdio.h>
#include <stdlib.h>
typedef int Item;
#define key(A) A
#define less(A, B) (key(A) < key(B))
#define exch(A, B) {Item t = A; A = B; B = t;}
#define compexch(A, B) if (less(A, B)) exch(A, B)
	
void sort(Item a[], int l, int r){
	int i, j;
	for (i = l+1; i <= r; i++){
		for (j = i; j > 1; j--){
			compexch(a[j-1], a[j]);
		}
	}
}