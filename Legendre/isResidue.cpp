#include "head.h"
#include "functions.h"

bool isResidue (int a, int p) {
	int answer = 0, z = p - 1, *o = new int[p - 1];

	for (int i = 1; i < p; i++) {
		o[i - 1] = (i*i) % p;
		//cout << o[i - 1] << " ";
	};
	//cout << endl;

	for (int i = 0; i < p - 2; i++) {
		if (a == o[i]) {
			answer++;
		};
	};

	return answer > 0;
}