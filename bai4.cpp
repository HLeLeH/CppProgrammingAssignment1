#include <iostream>
using namespace std;
int *reverse(int *array, int length);
int main() {
	int length;
	cout << "Enter a number of elements in the array: ";
	cin >> length;
	int *array = new int[length];
	cout << "Enter an array of integers: ";
	for (int i = 0; i < length; i++) {
		cin >> array[i];
	}
	int *reverseArray = reverse(array, length);
	cout << "The reversed array: ";
	for (int i = 0; i < length; i++) {
		cout << *(reverseArray + i) << " ";
	}
	delete[] array;
	delete[] reverseArray;
	return 0;
}
int *reverse(int *array, int length) {
	int *reverseArray = array;
	int temp;
	for (int i = 0; i < (float) length / 2; i++) {
		temp = *(array + i);
		*(array + i) = *(array + length - 1 - i);
		*(array + length - 1 - i) = temp;
	}
	return reverseArray;
}
