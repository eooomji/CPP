#include <iostream>
using namespace std;

// �̿�
int main() {
	char str[100] = "";
	cout << "���ڿ� �Է�>>";
	cin >> str;

	for (int i = 0; i != '\0'; i++) {
		cout << str[i] << endl;
	}
}