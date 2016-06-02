//就位排序，重排一个已经用索引排序过的文件

insitu(dataType data[], int a[], int N){
	int i, j, k;
	for (i = 0; i < N; i++){
		dataType v = data[i];
		for (k = i; a[k] != i; k = a[j], a[j] = j){
			j = k; 
			data[k] = data[a[k]];
		}
		data[k] = v;
		a[k] = k;
	}
}