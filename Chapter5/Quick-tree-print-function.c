/*This recursive program keeps track of the tree height and uses that
	information for indentation in printing out a representation of 
	the tree that we can use to debug tree-processing program. It 
	assumes that items in nodes are characters.*/
//中序遍历
	
void printnode(char c, int h){
	int i;
	for (i = 0; i < h; i++){
		printf("  ");
	}
	printf("%c\n", c);
}

void show(link x, int h){
	if(x == NULL){
		printnode('*', h);
		return;
	}
	show(x->r, h+1);
	printnode(x->item, h);
	show(x->l, h+1);
}