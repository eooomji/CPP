#include <iostream>
using namespace std;

int main() {
	int num = 0;
	cout << "�� ���� �Է��ϼ���>>";
	cin >> num;

	int sum = 0;
	for (int i = 0; i <= num; i++)
		sum += i;
	cout << "1���� " << num << "������ ���� " << sum << "�Դϴ�" << endl;

}