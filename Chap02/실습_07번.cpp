#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char Yes[100] = "";
	char answer[100] = "yes";

	while (true) {
		cout << "�����ϰ� ������ yes�� �Է��ϼ���>>";
		cin >> Yes;
		
		if (strcmp(Yes, answer) == 0)
			cout << "�����մϴ�...";
			break;
	}
}