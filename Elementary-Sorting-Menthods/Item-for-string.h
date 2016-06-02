//接口示例strings
typedef char* Item;
#define key(A) (A)
#define less(A, B) (strcmp(key(A), key(B)) < 0)
#define exch(A, B) {Item t; t = key(A); key(B) = key(A); key(A) = t;}
#define compexch(A, B) {if (less(B, A)) exch(A, B);}

Item ITEMrand(void);
int  ITEMscanf(Item*);
void ITEMshow(Item);