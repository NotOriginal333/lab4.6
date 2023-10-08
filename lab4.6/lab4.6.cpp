#include <iostream> 
#include <cmath> 

using namespace std;

int main()
{
	double P, P1;
	int i, k;
	P = 1;
	i = 1;
	while (i<=3) {
		k = 1;
		P1 = 1;
		while (k <= 4 - i) {
			P1 *= (sin(i * k * k) + cos(k * i * i)) / (k * k + i * i);
			k++;
		}
		P *= P1;
		i++;
	}
	cout << P << endl;
	P = 1;
	i = 1;
	do {
		k = 1;
		P1 = 1;
		do {
			P1 *= (sin(i * k * k) + cos(k * i * i)) / (k * k + i * i);
			k++;
		} while (k <= 4 - i);
		P *= P1;
		i++;
	} while (i <= 3);
	cout << P << endl;
	P = 1;
	for (i = 1; i <= 3; i++) {
		P1 = 1;
		for (k = 1; k <= 4 - i; k++) {
			P1 *= (sin(i * k * k) + cos(k * i * i)) / (k * k + i * i);
		}
		P *= P1;
	}
	cout << P << endl;
	P = 1;
	for (i = 3; i >= 1; i--) {
		P1 = 1;
		for (k = 4-i; k >= 1; k--) {
			P1 *= (sin(i * k * k) + cos(k * i * i)) / (k * k + i * i);
		}
		P *= P1;
	}
	cout << P << endl;
}