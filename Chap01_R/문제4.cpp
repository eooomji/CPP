#include <iostream>
using namespace std;

int main() {
	int num, result;

	while (1) {
		cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		cin >> num;
		if (num == -1) {
			cout << "���α׷��� �����մϴ�." << endl;
			break;
		}
		else {
			result = 50 + num * 0.12;
			cout << "�̹��� �޿�: " << result << "����" << endl;
		}
	}
}