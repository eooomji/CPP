// ���� �޸� �Ҵ�
int* pInt = new int;	// int Ÿ���� ���� ���� �Ҵ�
char* pChar = new char;	// char Ÿ���� ���� ���� �Ҵ�
Circle* pCircle = new Circle;	// Circle Ŭ���� Ÿ���� ��ü �Ҵ�

delete pInt;	// �Ҵ���� ���� ���� ��ȯ
delete pChar;	// �Ҵ���� ���� ���� ��ȯ
delete pCircle;	// �Ҵ���� ��ü ���� ��ȯ

// �� �޸𸮰� �����ϸ� new�� NULL�� ���� 
// new�� ���� ���� NULL���� �˻��ϴ� ���� ���� !!!!!!!!!!!!!!!!?
int* p = new int;	// �����κ��� int Ÿ���� ���� ���� �Ҵ�
if (!p) {	// == if(p==NULL)
	return;	// �޸� �Ҵ�ޱ� ����
}
*p = 5;		// �Ҵ���� ���� ������ 5 ���
int n = *p;	// �Ҵ���� ���� �������� �� �б�. n=5
delete p;	// �Ҵ���� ���� ���� ��ȯ

// �迭�� delete �� �� ���ǻ���
int* p = new int[10];
delete p;	// ������ ��ȯ. delete [] p;�� �ؾ� ��.
int* q = new int;
delete[] q;	// ������ ��ȯ. delete q;�� �ؾ� ��.

// ��ü �迭�� ���
Circle* pArray = new Circle[3];	// ��ü �迭�� ���� ����

pArray[0].setRadius(10);
pArray[1].setRadius(20);
pArray[2].setRadius(30);

for (int i = 0; i < 3; i++)
	cout << pArray[i].getArea();

delete[] pArray;