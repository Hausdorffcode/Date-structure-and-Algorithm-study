/*This program uses a queue ADT to implement a bottom-up mergesort.
	Queue elements are ordered linked lists. After initializing the
	queue with lists of length 1, the program simply removes two lists
	from the queue, merge them, and puts the result back on the queue, 
	continuing until there is only one list. This corresponds to a sequence
	of passes through all the elements, doubling the length of the ordered
	lists in each pass, as in bottom-up mergesort.*/
//利用了文件中可能已经存在的顺序？？？
	
link mergesort(link t){
	link u;
	for (Qinit(); t != NULL; t = u){
		u  = t->next;
		t->next = NULL;
		Qput(t);
	}
	t = Qget();
	while(!Qempty()){
		Qput(t);
		t = merge(Qget(), Qget());
	}
	return t;
}