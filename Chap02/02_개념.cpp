#include<iostream>
#include<string>
using namespace std;

int main() {
	
	// ù ��° ���
	std::cout << "Hello\n";	// \n == end1
	std::cout << "ù ��° �������Դϴ�.";
	// �� ��° ���
	std::cout << "Hello\n" << "ù ��° �������Դϴ�.";

	int width, height;
	cout << "�ʺ�� ���̸� �Է��ϼ��� >> ";
	cin >> width >> height;
	cout << width << "\n" << height << "\n";

	char address[100];
	cin.getline(address, 100, '\n'); // cin.getline(address, 100)�� ����

	string song("Falling in love with you");	// ���ڿ� song
	string elvis("Elvis Presley");
	string singer;

	cout << song + "�� �θ� ������";
	cout << "(��Ʈ : ù ���ڴ�" << elvis[0] << ")? ";

	getline(cin, singer);	// ���ڿ� �Է�
	if (singer == elvis)
		cout << "�¾ҽ��ϴ�.";
	else
		cout << "Ʋ�Ƚ��ϴ�." + elvis + "�Դϴ�." << endl; // +�� ���ڿ� ����

	return 0;
}