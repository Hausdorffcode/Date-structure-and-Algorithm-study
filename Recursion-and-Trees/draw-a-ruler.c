//Divide-and-conquer-to-draw-a-ruler
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


//Nonrecursive-program-to-draw-a-ruler
//首先绘制所有长度为1的刻度，然后绘制长度为2的刻度，依此类推
//变量t为刻度的长度，变量j为两个长度为t的两个连续刻度间的刻度数。
//外部变量for循环增加t， 并具有性质j = 2^（t-1）
//内部for循环绘制出所有长度为t的刻度

rule(int l, int r, int h){
	int i, j, t;
	for(t = 1, j = 1; t <= h; j += j, t++){
		for (i = 0; l+j+i <= r; i += j+j){
			mark(l+j+i, t);
		}
	}
}