//The patitioning loop is implemented as an infinite loop, with a break when the pointers cross. The test j == l protects aginst the case that the partitioning element is the smallest element in the file.

int partition(Item a[], int l, int r){
	int i = l-1, j = r; 
	Item v = a[r];
	for(;;){
		while (less(a[++i], v);//当键=划分元素时，我们使两个指针都停止,做交换，这样的好处是主元会处于比较中间的位置，快排递归就接近中分
		while (less(v, a[--j])) if (j == l) break;//也许有必要用一个标记（sentinel）来避免这个测试
		if (i >= j) break;
		exch(a[i], a[j]);
	}
	exch(a[r], a[i]);
	return i;
}