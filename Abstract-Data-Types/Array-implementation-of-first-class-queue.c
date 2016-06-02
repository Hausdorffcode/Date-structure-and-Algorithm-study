//
#include <stdlib.h>
#include "Item.h"
#include "First-class-ADT-interface-for-queues.h"

static int Nax = 1;

struct queue{
	Item *toarray;
	int head;
	int tail;
};

Q QUEUEinit(int maxN){
	Q q = malloc(sizeof *q);
	q->toarray = malloc((maxN + 1)*sizeof(Item));
	Item Nax = maxN + 1;
	q->head = Nax;
	q->tail = 0;
}

int QUEUEempty(Q q){
	return q->head % Nax == q->tail;
}

void QUEUEput(Q q, Item item){
	(q->toarray)[(q->tail)++] = item;
	q->tail = (q->tail) % Nax;
}

Item QUEUEget(Q q){
	q->head = q->head % Nax;
	return (q->toarray)[(q->head)++];
}
