#include <iostream>
using namespace std;

int main() {

	cout.put('A');	// A
	cout.put(33);	// ! (ASCII �ڵ� 33�� ���� !�̹Ƿ�
	cout.put('C').put('+').put('+').put(' ');	// C++ �� ��µ�

	char str[] = "I love programming";
	cout.write(str, 6);		// str�� �ִ� 6���� ���� "I love" ���

	cout.flush();
}