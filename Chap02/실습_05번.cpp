#include <iostream>
using namespace std;

int main() {
	char str[100] = {};

	cout << "���ڵ��� �Է��϶�(100�� �̸�)." << endl;
	
	int count = 0;
	cin.getline(str, 100);

	for (int i = 0; i < 100; i++)
		if (str[i] == 'x')
			count++;

	cout << "x�� ������ " << count;

	return 0;
}