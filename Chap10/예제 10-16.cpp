#include <iostream>
#include <string>
using namespace std;

int main() {
	auto love = [](string a, string b) {
		cout << a << "���� " << b << "�� ����" << endl;
	};

	love("��", "��");		// ������ �ʰ� ����
	love("�ø�", "����");	// �ø麸�� ���ΰ� ����
}