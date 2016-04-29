#include "head.h"
#include "functions.h"

int legSym (int a, int p) {
	if ((a%p) == 0) { // если делится нацело
		return 0;
	} else if (isResidue(a, p)) { // если квадратичный вычет
		return 1;
	} else {
		return -1; // если квадратичный невычет
	};
}