/*这个程序基于将数组划分成三个部分：小于、等于、大于划分元素的元素。于是，排序
	可以通过两个递归调用来完成，一个调用针对较小键，另一个调用针对较大键。*/
/*为了达到以上目的，程序将等于划分元素的键放在左边的l和ll之间，右边rr和r之间。
	在划分循环中，扫描指针停止，而且交换i，j处的项之后，它检查每个项是否等于划分元素
	，将它交换到数组的左部分；如果右边有一个元素等于划分元素，将它交换到数组右边部分。*/
//指针交叉后，等于划分元素的数组两端被交换回到中间。于是，那些到达最终位置的键可以被排除在子文件的递归调用之外。

#define eq(A, B) (!less(A, B) && !less(B, A))
void quicksort(Item a[], int l, int r){
	int i, j, k, q, p;
	Item v;
	if (r <= l) return;
	v = a[r];
	i = l-1;
	j = r;
	p = l-1;
	q = r;
	for(;;){
		while (less(a[++i], v));
		while (less(v, a[--j])) if (j ==l) break;
		if (i >= j) break;
		exch(a[i], a[j]);
		if (eq(a[i], v)){p++; exch(a[i], a[p]);}
		if (eq(a[j], v)){q++; exch(a[j], a[q]);}
	}
	exch(a[i], a[r]); j = i-1; i = i + 1;
	for (k = l; k < p; k++, j--)
		exch(a[k], a[j]);
	for (k = r-1; k > q; k--, i++)
		exch(a[k], a[i]);
	quicksort(a, l, j);
	quicksort(a, i, r);
}