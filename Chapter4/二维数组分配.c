int **malloc2d(int r, int c){
	int i;
	int **t = malloc(r * sizeof(int *));
	for (i = 0; i < r; i++){
		t[i] = malloc(c * sizeof(int));
	}
	return t;
}

//则分配M x N整形二维数组语句为 int **a = malloc2d(M, N);