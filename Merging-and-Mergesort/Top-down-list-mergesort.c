/*This program sorts by splitting the list pointed to by c into two halves
	pointed to by a and b, sorting the two halves recursively, and then using
	merge to produce the final result. The input list must end with NULL(and
	therefore so does the b list), and the explict instruction that sets c->next
	to NULL puts NULL at the end of the a list.*/
	
link merge (link a, link b);
link mergesort(link c){
	link a, b;
	if (c == NULL || c->next == NULL) return c;
	a = c;
	b = c->next;
	
	while ((b != NULL) && (b->next != NULL)){
		c = c->next;
		b = b->next->next;
	}                         //这个循环就是找链表中点
	
	b = c->next;
	c->next = NULL;
	return merge(mergesort(a), mergesort(b));
}