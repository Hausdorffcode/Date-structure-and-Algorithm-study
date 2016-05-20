//这个接口为用户提供了复数对象的handles，
//但是除了它的标注名称外，没有给出有关表示法的任何信息——它是一个没有定义的struct

typedef struct complex *Complex;

Complex COMPLEXinit(float, float);
float Re(Complex);
float Im(Complex);
Complex COMPLEXmult(Complex, Complex);