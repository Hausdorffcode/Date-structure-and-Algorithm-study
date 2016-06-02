//层序：从上到下，从左到右
//基于队列
void traverse(link h, void (*visit)(link)){
	QUEUEinit(max);
	QUEUEput(h);
	while (!QUEUEempty()){
		(*visit)(h = QUEUEget());
	if (h->l != NULL) STACKpush(h->l);
	if (h->r != NULL) STACKpush(h->r);  //为什么先是l？？？
	}
}