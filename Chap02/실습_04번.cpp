#include <iostream>
using namespace std;

int main() {
	float a = 0, b = 0, c = 0, d = 0, e = 0, max = 0;

	cout << "5 ���� �Ǽ��� �Է��϶�>>";
	cin >> a >> b >> c >> d >> e;

	float array[] = { a,b,c,d,e };

	max = array[0];
	for (int i = 0; i < 5; i++)
		if (max < array[i + 1])
			max = array[i + 1];

	cout << "���� ū �� = " << max << endl;
}