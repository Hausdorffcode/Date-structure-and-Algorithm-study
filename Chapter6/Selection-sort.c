//运行时间收比较次数控制，比较次数与N^2成比例
void selection(Item a[], int l, int r){
	int i, j;
	for(i = 1; i < r; i++){                //这里最后一个i=r不用比较
		int min = i;
		for (j = i+1; j <= r; j++){
			if (less(a[j], a[min])
				min = j;
		}
		exch(a[i], a[min]);
	}
}