#include <iostream>
#include <string>	// std::getline()�� ������.
#include <cstring>
using namespace std;


int main() {
	cout << "5���� �̸��� ';'���� �����Ͽ� �Է��ϼ���\n>>";
	//string name;

	//getline(cin, name, ';');	// ;�ձ����� ���� ==> ó�� �ſ��� ©��...
	//cout << name.size();

	//char name[100] = "";

	//cin.getline(name, 10, ';');
	//cout << name << endl;	// ���� �Ȱ��� ����. �ݺ����� �ʿ��غ���..

	char name[100], lar_name[100];
	int len = 0;
	for (int i = 0; i < 5; i++) {	// �ƴ�.. ���� ���� �� �͸� �������ָ� �� !
		cin.getline(name, 10, ';');
		cout << i + 1 << ":" << name << endl;
		if (len < strlen(name)) {	// len�� 0���� �����صΰ�, ����ؼ� ū �� ����
			len = strlen(name);		// strlen(name)�� len���� ũ�� len�� ��
			strcpy(lar_name, name);	// name�� lar_name�� �����ϱ�
		}
	}
	cout << "���� �� �̸���" << lar_name << endl;
}