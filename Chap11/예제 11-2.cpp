#include <iostream>
using namespace std;

void get1() {
	cout << "cin.get()�� <Enter> Ű���� �Է� �ް� ����մϴ�>>";
	int ch;
	while ((ch = cin.get()) != EOF) {	// ���� �б�
		cout.put(ch);					// ���� ���� ���
		if (ch == '\n')					// <Enter> Ű�� �Է� �Ǹ�
			break;						// �б� �ߴ�
	}
}

void get2() {
	cout << "cin.get(char&)�� <Enter> Ű���� �Է� �ް� ����մϴ�>>";
	char ch;
	while (true) {
		cin.get(ch);					// ���� �б�
		if (cin.eof()) break;			// EOF�� ������ �б� ����
		cout.put(ch);					// ch�� ���� ���
		if (ch == '\n')
			break;
	}
}

int main() {
	get1();
	get2();
}