#include <iostream>
using namespace std;

// �̿�
int main() {
	char str1[100] = "";
	cout << "�� ��ȣ�� �Է��ϼ���>>";
	cin >> str1;
	cout << "str1�� " << str1 << endl;

	char str2[100] = "";
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
	cin >> str2;
	cout << "str2�� " << str2 << endl;

	if (str1 == str2)
		cout << "�����ϴ�" << endl;
	else
		cout << "���� �ʽ��ϴ�" << endl;

	return 0;
}