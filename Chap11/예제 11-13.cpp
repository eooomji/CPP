#include <iostream>
#include <string>
using namespace std;

istream& question(istream& ins) {	// ������ �ۼ�
	cout << "�ſ�� �ſ�� ���� ���� ���ڴ�? ";
	return ins;
}

int main() {
	string answer;
	cin >> question >> answer;	// question : ������ ȣ��
	cout << "���󿡼� ���� ���� ����� " << answer << "�Դϴ�." << endl;
}