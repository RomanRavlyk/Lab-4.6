#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int i, k;
	double S, P;
	
	S = 0;
	i = 1;
	while (i <= 15) {
		P = 1;
		k = 1;
		while (k <= i) {
			P *= sqrt(k);
			k++;
		}
		S += (sin(10 * i) + cos(10 * i)) / P;
		i++;
	}
	cout << "sum: " << S << endl;
	S = 0;
	i = 1;
	do {
		P = 1;
		k = 1;
		do {
			P *= sqrt(k);
			k++;
		} while (k <= i);
		S += (sin(10 * i) + cos(10 * i)) / P;
		i++;
	} while (i <= 15);
	cout << "sum: " << S << endl;

	S = 0;
	for (i = 1; i <= 15; i++) {
		P = 1;
		k = 1;
		for (k = 1; k <= i; k++) {
			P *= sqrt(k);
		}
		S += (sin(10 * i) + cos(10 * i)) / P;
	}
	cout << "sum: " << S << endl;

	S = 0;
	for (i = 15; i >= 1; i--) {
		P = 1;
		for (k = i; k >= 1; k--) {
			P *= sqrt(k);
		}
		S += (sin(10 * i) + cos(10 * i)) / P;
	}
	cout << "sum: " << S << endl;
	return 0;
}