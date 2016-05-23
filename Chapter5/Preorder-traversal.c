//recursive
void traverse(link h, void (*visit)(link)){
	if (h == NULL) return;
	(*visit)(h);
	traverse(h->l, visit);
	traverse(h->r, visit);
}

//nonrecursive
//对于前序不需要将节点推入栈中，因此可是使用一个只包含一种类型（树链接）的简单栈
void traverse(link h, void (*visit)(link)){
	STACKinit(max);
	STACKpush(h);
	while(!STACKempty()){
		(*visit)(h = STACKpop());
		if (h->r != NULL) STACKpush(h->r);
		if (h->l != NULL) STACKpush(h->l);
	}
}