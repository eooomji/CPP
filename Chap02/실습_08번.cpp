#include <iostream>
#include <istream>
#include <string>
using namespace std;

// �̿�
int main() {
	cout << "5���� �̸��� ';'���� �����Ͽ� �Է��ϼ���\n>>";
	
	char name[100] = {};

	cin >> name;
	
	cin.getline(name, 100, ';');
		for (int i = 0; i < 5; i++)
			cout << i + ':' + name << endl;

}