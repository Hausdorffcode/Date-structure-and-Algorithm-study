//we do not specify here  whether or not lists have head nodes

typedef struct node *link;
struct node {Item item; link next;};
link NEW(Item, link);
link init(int);
link show(link);
link sort(link);