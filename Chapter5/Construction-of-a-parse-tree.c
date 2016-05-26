/*For simplicity, we assume that operands are single characters
	each call of the recursive function creates a new node with 
	the next character from the input as the token. If the token 
	is a operator, we set the left and right pointers to the tree 
	bulit(recursively) for the two arguments.*/
	
char *a;
int i;
typedef struct Tnode* link;
struct Tnode{
	char token;
	link l, r;
};

link NEW(char token; link l, link r){
	link x = malloc(sizeof *x);
	x->token = token ;
	x->l = l;
	x->r = r;
	return x;
}

link parse(){
	char t = a[i++];              //只有有限项
	link x = NEW(t, NULL, NULL);
	if ((t == '+') || (t == '*')){
		x->l = parse();
		x->r = parse();
	}
	return x;
}