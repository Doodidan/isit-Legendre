#include "head.h"
#include "functions.h"

bool residue (int a, int p) {
	int answer = 0;
	//cout << "mm" << endl;
	int z = p - 1;
	int *o = new int[p - 1];
	for (int i = 1; i < p; i++) {
		cout << "i= " << i << endl;
		o[i - 1] = (i*i) % p;
		cout << o[i - 1] << endl;
	}
	for (int j = 0; j < p - 2; j++) {
		if (a == o[j]) {
			answer++;
		}
	}
	return answer>0;
}