#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;
bool vichet(int a, int p) {
	int answer = 0;
	//cout << "mm" << endl;
	int z = p - 1;
	int *o=new int[p-1];
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

int findSymbol(int a, int p){
	//cout << "hh" << endl;
	if ((a%p) == 0){
		//cout << "kk" << endl;
		return 0;
	}
	else if (vichet(a, p)){
		return 1;
	}
	else return -1;
}

void main(){
		int a = 59;
		int p = 131;//simple number > 2
		cout << "symbol is " << findSymbol(a, p)<<endl;
		
	}


