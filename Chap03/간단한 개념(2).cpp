#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point();
	Point(int a, int b);
};
Point::Point() { x = 0; y = 0; }
Point::Point(int a, int b) { x = a; y = b; }


Point::Point() : x(0), y(0) {
}
Point::Point(int a, int b)
	: x(a), y(b) {
}

//class Circle {
//private:
//	int radius;
//public:
//	Circle();
//	Circle(int r);
//	double getArea();
//};
//
//inline Circle::Circle() {			// inline ��� �Լ�
//	radius = 1;
//}
//
//Circle::Circle(int r) {
//	radius = r;
//}
//	
//inline double Circle::getArea() {	// inline ��� �Լ�
//	return 3.14 * radius * radius;
//}

class Circle {
private:
	int radius;
public:
	Circle() {		// �ڵ� �ζ��� �Լ�
		radius = 1;
	}

	Circle(int r);
	double getArea() {
		return 3.14 * radius * radius;
	}
};

Circle::Circle(int r) {
	radius = r;
}