//接口示例double
typedef double Item;
#define key(A) (A)
#define less(A, B) (key(A) < key(B))
#define exch(A, B) {Item t; t = key(A); key(B) = key(A); key(A) = t;}
#define compexch(A, B) {if (less(B, A)) exch(A, B)}

Item ITEMrand(void);
int  ITEMscanf(Item*);
void ITEMshow(Item);