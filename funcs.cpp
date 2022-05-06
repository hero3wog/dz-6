#include "Header.h"
complex::complex(int re, int im) {
	this->re = re;
	this->im = im;
}
int complex::module() {
	return sqrt(pow(re, 2) + pow(im, 2));
}
bool complex::operator>(const complex& num) {
	return this->module() > sqrt(pow(num.re, 2) + pow(num.im, 2));
}
ostream& operator<<(ostream& os, const complex& num) {
	return os << num.re << "+" << num.im << "i" << endl;
}
template<class T>
void print(T* ar, int size) {
	for (int i = 0; i < size; i++)
		cout << ar[i] << " ";
	cout << endl << endl;
}

void sortirovka(int* ar, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (ar[j] > ar[j + 1]) {
				int q = ar[j];
				ar[j] = ar[j + 1];
				ar[j + 1] = q;
			}
		}
	}
	print(ar, size);
}
void sortirovka(double* ar, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (ar[j] > ar[j + 1]) {
				double q = ar[j];
				ar[j] = ar[j + 1];
				ar[j + 1] = q;
			}
		}
	}
	print(ar, size);
}
void sortirovka(complex* ar, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (ar[j].module() > ar[j + 1].module()) {
				complex q = ar[j];
				ar[j] = ar[j + 1];
				ar[j + 1] = q;
			}
		}
	}
	for (int i = 0; i < size; i++)
		cout << ar[i];
}