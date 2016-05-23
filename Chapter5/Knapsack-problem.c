//recursive implementation
//指数时间
typedef struct {
	int size;
	int val;
}Item;
//We have an array of N items of type Item
int knap(int cap){
	int i, space, max, t;
	for (i = 0, max = 0; i < N; i++){
		if ((space = cap - items[i].size) >= 0)
			if ((t = knap(space) + items[i].val) > max)
				max = t;
	}
	return max;
}


//Dynamic programming
//线性时间
/*we save the index of the item ,so that we can reconstruct the contents
	of the knapsack after the computation, if we wish: itemKnown[M] is index
	in the knapsack, the remaining contents are the same as for the optimal knapsack
	of size M - itemKnown[M].size so itemKnown[M - items[M].size] is in the knapsack,and so forth.*/
int knap(int M){
	int i, space, max, maxi, t;
	if (maxKnown[M] != unknown) return maxKnown[M];
	for (i = 0, max = 0; i < N; i++){
		if ((space = M - items[i].size) >= 0)
			if ((t = knap(space) + items[i].val) > max){
				max = t;
				maxi = i;
			}
	}
	maxKnown[M] = max;
	itemKnown[M] = items[maxi];
	return max;
}
