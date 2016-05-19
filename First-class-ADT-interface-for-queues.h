//A handle is a pointer to a structure that is unspecified expect for the tag name

typedef struct queue *Q;

void QUEUEdump(Q);
Q QUEUEinit(int maxN);
 int QUEUEempty(Q);
void QUEUEput(Q, Item);
Item QUEUEget(Q);

//现在是可以声明多个Q了，所以要参数