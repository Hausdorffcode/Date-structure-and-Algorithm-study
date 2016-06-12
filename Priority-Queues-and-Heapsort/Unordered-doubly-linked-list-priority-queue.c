/*we specify the structure PQnode to be a doubly-linked lisr node
(with a key and two links), and the structure pq to be the list's
head and tail links.*/
/*The overhead of maintaining doubly-linked lists is justtified by
the fact that the change priority, delete, and join operations all 
are also implemented in constant time, again using only elementary
operations on the lists。*/

#inlcude <stdlib.h>
#include "Item.h"
#include "PQfull.h"

struct PQnode {Item key; PQlink prev, next;};
struct pq {PQlink head, tail;};

PQ PQinit()
{
	PQ pq = malloc(sizeof *pq);
	PQlink h = malloc(sizeof *h),
			t = malloc(sizeof *t);
	h->prev = t; h->next = t;
	t->prev = h; t->next = h;
	pq->head = h; pq->tail = t;
	return pq;
}