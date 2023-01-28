#include <iostream>
#include <math.h>
using namespace std;

#pragma pack(1)

class Rect
{
public:

	Rect()
	{
		m_A = 1;
		m_B = 1;
	}

	Rect(double a, double b)
	{
		m_A = a;
		m_B = b;
	}

	~Rect()
	{

	}

	int getA()
	{
		return m_A;
	}
	int getB()
	{
		return m_B;
	}


	int setA(int a)
	{
		return m_A = a;
	}
	int setB(int b)
	{
		return m_B = b;
	}
	

	double dop()
	{
		double& x = m_A;
		double* y = &m_B;
		return x + *y + P;
	}
	void link()
	{
		double num = 100;
		X = &m_A;
		cout << *X << " " << X << endl;
		*X = num;
		cout << *X << " " << X << endl;
	}

private:
	double m_A;
	double m_B;
	double m_square;
	const int P = 10;
	double* X;
};

void main()
{
	Rect Rectangle(5, 5);
	Rectangle.setA(20);
	Rectangle.setB(30);
	cout << Rectangle.dop() << endl;
	Rectangle.link();
}