//
typedef struct node* link;
struct node {
	Item item;
	link l, r;
};

link NEW(Item item, link l, link r){
	link x = malloc(sizeof *x);
	x->item = item;
	x->l = l;
	x->r = r;
	return x;
}

link max(Item a[], int l, int r){    //这个函数不仅求出了最大值，而且还返回了一棵树
	int m = (l+r)/2;
	Item u,v;
	
	link x = NEW(a[m], NULL, NULL);
	if (l == r) return x;            //平凡情形l，r是用来辅助递归的
	x->l = max(a, l, m);
	x->r = max(a, m+1, r);
	
	u = x->l->item;
	v = x->r->item;
	if (u > v)
		x->item = u;
	else
		x->item = v;
	
	return x;
}