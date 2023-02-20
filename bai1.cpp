#include <iostream>
using namespace std;
int main() {
	int speed, time;
	do {
		cout << "What is the speed of the vehicle in mph? ";
		cin >> speed;
	} while (speed < 0);
	do {
		cout << "How many hours has it traveled? ";
		cin >> time;
	} while (time < 1);
	cout << "Hour Distance Traveled\n";
	cout << "--------------------------------\n";
	for (int i = 1; i <= time; i++) {
		cout << i << "\t" << i * speed << "\n";
	}
	return 0;
}
