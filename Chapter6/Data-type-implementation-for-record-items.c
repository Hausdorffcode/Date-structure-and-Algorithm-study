//We keep the implementation of less in a separate file, so that we can substitute different implementations,and therefore change sort keys, without changeing any other code.

struct record data[maxN];
int Nrecs = 0;
int ITEMscan(struct record **x){
	*x = &data[Nrecs];
	return scanf("%30s %d\n",
				data[Nrecs].name, &data[Nrecs++].num);
}

void ITEMshow(struct record *x){
	printf("%3d %-30s\n", x->num, x->name);
}