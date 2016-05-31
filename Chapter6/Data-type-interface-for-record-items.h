//The record have two keys : a string key, a integer key
//The comparison less is defined as a function ,rather than as a maacro, so we can change sort keys by changing implementations.

struct record {char name[30]; int num;};
typedef struct record* Item;
#define exch(A, B) {Item t = A; A = B; B = t;}
#define compexch(A, B) {if (less(B, A)) exch(A, B);}
int less(Item, Item);
Item ITEMrand();
int ITEMscan(Item*);
void ITEMshow(Item);