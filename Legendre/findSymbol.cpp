#include "head.h"
#include "functions.h"

int findSymbol (int a, int p) {
	//cout << "hh" << endl;
	if ((a%p) == 0){
		//cout << "kk" << endl;
		return 0;
	}
	else if (residue(a, p)){
		return 1;
	}
	else return -1;
}