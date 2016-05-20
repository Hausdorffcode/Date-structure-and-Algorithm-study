//这段代码没有检查一些错误，如客户师徒对空队列进行get操作，或者不成功的malloc

#include <stdlib.h>
#include "Item.h"
#include "First-class-ADT-interface-for-queues.h"

typedef struct QUEUEnode *link;
struct QUEUEnode{
	Item item;
	link next;
};
struct queue{
	link head;
	link tail;
};

link NEW(Item item, link next){
	link x = malloc(sizeof *x);
	x->item = item;
	x->next = next;
	return x;
}

Q QUEUEinit(int maxN){
	Q q = malloc(sizeof *q);
	q->head = NULL;
	return q;
}

int QUEUEempty(Q q){
	return q->head == NULL;
}

void QUEUEput(Q q, Item item){
	if (q->head == NULL){
		q->head = (q->tail = NEW(item, q->head));
		return;
	}
	q->tail->next = NEW(item, q->tail->next);
	q->tail = q->tail->next;
}

Item QUEUEget(Q q){
	Item item = q->head->item;
	link t = q->head->next;
	free(q->head);
	q->head = t;
	return item;
}
