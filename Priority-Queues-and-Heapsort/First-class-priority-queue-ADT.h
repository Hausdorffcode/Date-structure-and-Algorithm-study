/*This interface for a priority-queue ADT provides handles to items(which
allow client ptigrams to delete items and to change priorities) and handles
to priority queues (which allow clients to maintain multiple priority queues
and ti merge queues together).*/

typedef struct pq* PQ;
typedef struct PQnode* PQlink;
PQ PQinit();
int PQempty(PQ);
PQlink PQinsert(PQ, Item);
Item PQdelmax(PQ);
void PQchange(PQ, PQlink, Item);
void PQdelete(PQ, PQlink);
void PQjoin(PQ, PQ);