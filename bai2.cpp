#include <iostream>
#include<math.h>
using namespace std;
void quadraticEquation(float a, float b, float c, int *rootNum, float *x1, float *x2);
int main() {
	float a, b, c;
	int rootNum;
	float x1, x2;
	cout << "The quadratic equation ax^2 + bx + c = 0\n";
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;
	quadraticEquation(a, b, c, &rootNum, &x1, &x2);
	cout << "The number of roots: " << rootNum;
	if (rootNum == 1) {
		cout << "\nThe root x1 = x2 = " << x1;
	} else if (rootNum == 2) {
		cout << "\nThe roots: x1 = " << x1 << "; x2 = " << x2;
	}
	return 0;
}
void quadraticEquation(float a, float b, float c, int *rootNum, float *x1, float *x2) {
	float delta = b*b - 4*a*c;
	if (delta < 0) {
		*rootNum = 0;
	} else if (delta == 0) {
		*rootNum = 1;
		*x1 = -b / (2*a);
	} else {
		*rootNum = 2;
		*x1 = (-b - sqrt(delta)) / (2*a);
		*x2 = (-b + sqrt(delta)) / (2*a);
	}
}
