#include "head.h"

int legSym (int a, int p) {
	if ((a%p) == 0) { // ���� ������� ������
		return 0;
	} else if (isResidue(a, p)) { // ���� ������������ �����
		return 1;
	} else {
		return -1; // ���� ������������ �������
	};
}