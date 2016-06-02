//This implementation uses an anxiliary routine finmax, which returns a link to the node whose link points to the maxiumum element on a list.

link listselection(link h){
	link max, t, out = NULL;
	while (h->next != NULL){
		max = finmax(h);
		t = max->next;
		max->next = t->next;
		t->next = out;
		out = t;
	}
	h->next = out;
	return (h);
}
