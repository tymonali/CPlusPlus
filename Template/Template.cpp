#include <iostream>
#include <Windows.h>
using namespace std;

template <typename T>
class Point2D
{
	T x;
	T y;
public:
	Point2D(T x, T y) : x(x), y(y) {}

	void setX(T x)
	{
		this->x = x;
	}

	T getX() const
	{
		return x;
	}
	T getY()const
	{
		return y;
	}
};

int main()
{
	Point2D<int> p(10, 20);
	
	Point2D<double> p2(10.3, 22.5);
	cout << p.getX() << " " << p.getY() << "\n";
	cout << p2.getX() << " " << p2.getY() << "\n";
	system("pause");
	return 0;
}