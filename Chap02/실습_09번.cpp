#include <iostream>
using namespace std;

int main() {
	char name[100] = "";
	cout << "�̸���?";
	cin.getline(name, 100, '\n');

	char address[100] = "";
	cout << "�ּҴ�?";
	cin.getline(address, 100, '\n');

	char age[100] = "";
	cout << "���̴�?";
	cin.getline(age, 100, '\n');

	cout << name << ", " << address << ", " << age << "��" << endl;
}