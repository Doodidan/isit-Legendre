#include "head.h"

int main(){
	setlocale(LC_ALL, "Russian");

	int a = 81, // �����
		p = 89, // ������� != 2
		t;

	cout << "��������� �����: a=" << a << ", p=" << p << endl;

	if (!isPrime(p)) {
		cout << "������� ������ p! (�� �������)" << endl;
		return 0;
	} else if (p==2) {
		cout << "������� ������ p! (����� ����)" << endl;
		return 0;
	};

	t = legSym(a, p);

	cout << "������ �������� ��� �������� ���� (a|p): " << t << endl;

	cout << "��������: ";
	if (t == 0) {
		cout << "a ������� �� p" << endl;
	} else if (t == 1) {
		cout << "a �������� ������������ ������� �� ������ p" << endl;
	} else {
		cout << "a �������� ������������ ��������� �� ������ p" << endl;
	};

	return 0;
}
