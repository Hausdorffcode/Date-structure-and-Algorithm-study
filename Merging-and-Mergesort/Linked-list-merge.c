/*This program merges the list pointed to by a with the list pointed to by b,
	with the help of an auxiliary pointer c. The key comparision in merge includes
	equality, so that the merge will be stable, if the b list is considered to 
	follow the list. For simplicity, we adopt the convention that all lists ends 
	with NULL. Other convention for ending the list would work as well. More improtant,
	we do not use list head nodes, to void proliferation of them.*/
	
link merge(link a, link b){
	struct node head;
	link c = &head;
	while ((a != NULL) && (b != NULL)){
		if (less(a->item, b->item)){
			c->next = a;
			c = a;
			a = a->next;
		}
		else{
			c->next = b;
			c = b;
			b = a->next;
		}
	}
	c-next = (a == NULL) ? b : a;
	return head.next;
}
