//recursive implementation
//指数时间
int F(int i){
	if (i < 1) return 0;
	if (i == 1) return 1;
	return F(i-1) + F(i-2);
}


//
F[0] = 0; F[1] = 1;
for (i = 2; i <= N; i++) {
	F[i] = F[i-1] + F[i-2];
}


//dynamic programming
//线性时间
int F(int i){
	int t;
	if (knownF[i] != unknown) return knownF[i];
	if (i == 0) t = 0;
	if (i == 1) t = 1;
	if (i > 1) t = F(i-1) + F(i-2);
	return knownF[i] = t;
}