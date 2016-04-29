#include "head.h"

int main(){
	setlocale(LC_ALL, "Russian");

	int a = 81, // целое
		p = 89, // простое != 2
		t;

	cout << "Введенные числа: a=" << a << ", p=" << p << endl;

	if (!isPrime(p)) {
		cout << "Неверно задано p! (Не простое)" << endl;
		return 0;
	} else if (p==2) {
		cout << "Неверно задано p! (Равно двум)" << endl;
		return 0;
	};

	t = legSym(a, p);

	cout << "Символ Лежандра для заданной пары (a|p): " << t << endl;

	cout << "Значение: ";
	if (t == 0) {
		cout << "a делится на p" << endl;
	} else if (t == 1) {
		cout << "a является квадратичным вычетом по модулю p" << endl;
	} else {
		cout << "a является квадратичным НЕвычетом по модулю p" << endl;
	};

	return 0;
}
