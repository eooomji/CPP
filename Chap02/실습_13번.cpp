#include <iostream>
using namespace std;

int main() {
	int num = 0;
	int people = 0;

	cout << " ***** �¸��忡 ���� ���� ȯ���մϴ�. *****" << endl;
	while (1) {
		cout << "«��:1, ¥��:2, ������:3, ����:4>>";
		cin >> num;
		if (num >= 5) {
			cout << "�ٽ� �ֹ��ϼ���!!" << endl;
			cout << "«��:1, ¥��:2, ������:3, ����:4>>";
			cin >> num;
		}
		else if (num == 4) {
			cout << "���� ������ �������ϴ�." << endl;
			return 0;
		}

		cout << "���κ�?";
		cin >> people;

		if (num == 1)
			cout << "«�� " << people << "�κ� ���Խ��ϴ�" << endl;
		else if (num == 2)
			cout << "¥�� " << people << "�κ� ���Խ��ϴ�" << endl;
		else if (num == 3)
			cout << "������ " << people << "�κ� ���Խ��ϴ�" << endl;
	}
}