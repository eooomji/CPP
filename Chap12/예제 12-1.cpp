#include <iostream>
#include <fstream>
using namespace std;

int main() {
	char name[10], dept[20];
	int sid;

	// Ű����κ��� �б�
	cout << "�̸�>> ";
	cin >> name;
	cout << "�й�(���ڷ�)>> ";
	cin >> sid;
	cout << "�а�>> ";
	cin >> dept;

	// ���� ����. student.txt ������ ����, ��� ��Ʈ�� ����
	ofstream fout("c:\\student.txt");
	if (!fout) {
		cout << "c:\\student.txt ������ �� �� �����ϴ�.";
		return 0;
	}

	// ���� ����
	fout << name << endl;
	fout << sid << endl;
	fout << dept << endl;

	fout.close();
}