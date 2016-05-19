//这个复数ADT实现包含结构的定义（它隐藏于客户）和函数实现
//所有针对被使用数据结构的信息都被封装在实现中而得到保护。

#include <stdio.h>
#include "COMPLEX.h"

struct comlex{
	float Re;
	float Im;
};

Complex COMPLEXinit(float Re, float Im){
	Complex t = malloc(sizeof(*t));
	t->Re = Re;
	t->Im = Im;
	return t;
}

float Re(Complex z){
	return z->Re;
}

float Im(Complex z){
	return z->Im;
}

Complex COMPLEXmult(Complex a, Complex b){
	return COMPLEXinit(Re(a)*Re(b)-Im(a)*Im(b),
						Re(a)*Im(b)+Im(a)*Re(b));
}//存在内存泄漏（memory leak）缺陷，没有free
