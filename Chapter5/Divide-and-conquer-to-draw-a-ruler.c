//This program is intended to be used with r-l equal to a power of 2---a property that it perserves in its recursive calls.
//从左往右绘制

rule(int l, int r, int h){
	int m = (l + r) / 2;
	if (h > 0){
		rule(l, m, h-1);
		mark(m, h);
		rule(m+1, r, h-1);
	}
}