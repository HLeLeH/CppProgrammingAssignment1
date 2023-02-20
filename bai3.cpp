#include <iostream>
using namespace std;
float median(int *array, int length);
int main() {
	int length;
	cout << "Enter a number of elements in the array: ";
	cin >> length;
	int *array = new int[length];
	cout << "Enter an array of integers: ";
	for (int i = 0; i < length; i++) {
		cin >> array[i];
	}
	cout << "The median of the array: " << median(array, length);
	delete[] array;
	return 0;
}
float median(int *array, int length) {
	float med;
	if (length % 2 == 0) {
		med = ((float) *(array + length / 2 - 1) + *(array + length / 2)) / 2;
	} else {
		med = (float) *(array + length / 2);
	}
	return med;
}
