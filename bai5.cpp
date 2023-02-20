#include <iostream>
using namespace std;
void swap (float *a, float *b);
void sortAsc(float *array, int length);
float average(float *array, int length);
int main() {
	int length;
	cout << "Enter a number of test scores: ";
	cin >> length;
	float *array = new float[length];
	cout << "Enter an array of test scores: ";
	for (int i = 0; i < length; i++) {
		cin >> array[i];
	}
	sortAsc(array, length);
	cout << "The sorted array of test scores: ";
	for (int i = 0; i < length; i++) {
		cout << *(array + i) << " ";
	}
	cout << "\nThe average score: " << average(array, length);
	delete[] array;
	return 0;
}
void swap (float *a, float *b) {
	float temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void sortAsc(float *array, int length) {
	int i, j;
    for (i = 0; i < length - 1; i++) {
    	for (j = 0; j < length - i - 1; j++) {
    		if (*(array + j) > *(array + j + 1)) {
    			swap((array + j), (array + j + 1));
    		}
    	}
    }
}
float average(float *array, int length) {
	float sum = *array;
	for (int i = 1; i < length; i++) {
		sum += *(array + i);	
	}
	return sum / length;
}
