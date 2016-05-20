typefdef struct node *link;
struct node {
	int  item;
	link next;
};

int i, N;

//循环链表
link t = malloc(sizeof(*t)), x = t;
t->item = 1;
t->next = t;
for (i = 2; i <= N; i++){
	x->next = malloc(sizeof(*x));
	x = x->next;
	x->next = t;
	x->item = i;
}

//head pointer,null tail
struct node head;
link a = &head, t = a;
for (i = 0; i < N; i++){
	t->next = malloc(sizeof(*t));
	t = t->next;
	t->next = NULL;
	t->item = 11111;
}