#include <iostream>
using namespace std;

class Circle {	// Circle �����
	//Circle();		// �������� ������ ����. ���� ����X
	//void Circle(int r);		// ����. �����ڴ� ���� Ÿ�� ����
	//int Circle(double r);	// ����. �����ڴ� ���� Ÿ�� ����
public:
	int radius;
	Circle();
	Circle(int r);
	double getArea();
};
//Circle::Circle() {
//	return;	// ������ �Լ��� �����ϴ� �������� ���Ϲ�
//}
//
//Circle::Circle() {
//	return 0;	// ����. ������ �Լ��� ���� �����ϸ� �� ��
//}

Circle::Circle() {
	radius = 1;
	cout << "������ " << radius << " �� ����" << endl;	// ������ 1 �� ����
}

Circle::Circle(int r) {
	radius = r;
	cout << "������ " << radius << " �� ����" << endl;	// ������ 30 �� ����
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut ������ " << area << endl;	// donut ������ 3.14

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl;	// pizza ������ 2826
}