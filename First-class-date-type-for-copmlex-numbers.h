//这个复数的接口包含一个typedef，它允许实现声明Complex类型的变量，而且将这些变量用作函数参数和返回值。
//不过这个数据类型为非抽象，因为这种表示没有隐藏于用户。
typedef struct {
	float Re;
	float Im;
}Complex;

Complex COMPLEXinit(float, float);
float Re(Complex);
float Im(Complex);
Complex COMPLEXmult(Complex, Complex);
