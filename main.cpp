#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
using namespace std;

class Circle
{
private:
	double m_radius;
public:
	Circle(double radius)
	{
		m_radius = radius;
	}
	Circle()
	{
		m_radius = 1;
	}
	Circle(Circle &A)
	{
		m_radius = A.get_r();
	}
	~Circle()
	{

	}	

	double get_r()
	{
		return m_radius;
	}
	void set_r(double radius)
	{
		m_radius = radius;
	}

	void show_r()
	{
		cout << m_radius;
	}

	double square_of_circle()
	{
		return (M_PI * pow(m_radius, 2));
	}
};

int main()
{
	Circle one(10);
	cout << one.square_of_circle() << endl;
	Circle nine = one;
	cout << nine.square_of_circle();
	//cout << one.square_of_circle() << endl;
	//one.set_r(50);
	//cout << one.get_r() << endl;
	//cout << one.get_r() << one.square_of_circle();
}