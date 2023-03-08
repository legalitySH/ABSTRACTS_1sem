// C++ ����������� ��� ������ - ����������� �����
#include <iostream>
using namespace std;
struct Complex
{
	double re; // ������������ ����� ������������ �����
	double im; // ������ ����� ������������ �����
};
// ������������� ������������ �����
void define(Complex& c, double r = 0.0, double i = 0.0)
{
	c.re = r;
	c.im = i;
}
// �������� ����������� �����
Complex add(Complex a, Complex b)
{
	Complex temporary;
	temporary.re = a.re + b.re;
	temporary.im = a.im + b.im;
	return temporary;
}
// ��������� ����������� �����
Complex subtract(Complex a, Complex b)
{
	Complex temporary;
	temporary.re = a.re - b.re;
	temporary.im = a.im - b.im;
	return temporary;
}
// ��������� ����������� �����
Complex multiply(Complex a, Complex b)
{
	Complex temporary;
	temporary.re = a.re * b.re - a.im * b.im;
	temporary.im = a.re * b.im + b.re * a.im;
	return temporary;
}
// ������� ����������� �����
Complex divide(Complex a, Complex b)
{
	Complex temporary;
	double divider = b.re * b.re + b.im * b.im;
	temporary.re = (a.re * b.re + a.im * b.im) / divider;
	temporary.im = (b.re * a.im - a.re * b.im) / divider;
	return temporary;
}
// ������������ ������������ �����
void print(Complex c)
{
	cout << '(' << c.re << ", " << c.im << ')' << endl;
}
int main()
{
	Complex x1, y1, z1, x2, z2;
	// ������������� ��������� ��������� - ����������� �����
	define(x1, -1, 5); // x1 = -1 + 5i
	define(y1, 3, -4); // y1 = 3 - 4i
	define(z1, 1, 3); // z1 = 1 + 3i
	define(x2, 10, 7); // x2 = 10 + 7i
	define(z2, 0, 5); // z2 = 5i
	// ������������ ������������ �������� ���������
	print(add(divide(multiply(multiply(x1, x1), y1), z1),
		divide(x2, z2)));
	return 0;
}