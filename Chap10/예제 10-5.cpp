#include <iostream>
using namespace std;

template <class T>
void print(T array[], int n) {
	for (int i = 0; i < n; i++)
		cout << array[i] << '\t';
	cout << endl;
}

void print(char array[], int n) {
	for (int i = 0; i < n; i++)
		cout << (int)array[i] << '\t';	// char�� �ް� int ������ ��ȯ�ؾ� ���ڰ� �ùٸ��� ����
	cout << endl;
}

int main() {
	int x[] = { 1,2,3,4,5 };
	double d[5] = { 1.1,2.2,3.3,4.4,5.5 };

	print(x, 5);
	print(d, 5);

	char c[5] = { 6,7,8,9,10 };
	print(c, 5);
}