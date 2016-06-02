/*To visit all the nodes connected to node k in a graph, we mark it as 
	visited, then (recursively) visit all the unvisited nodes on k's
	adjecency list.*/
	
void traverse(int k, void (*visit)(int)){
	link t;
	(*visit)(k);
	visited[k] = 1;
	for (t = adj[k]; t != NULL; t = t->next){
		if (!visited[t->v])
			traverse(t->v, visit);
	}
}