#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int n, c;
	cin >> n;
	cin >> c;
	if (n == 0) {
		cout << "продолжить движение";
	}
	if (n == 1) {
		cout << "поворот налево";
	}
	if (n == -1) {
		cout << "поворот направо";
	}
	if (c == 0) {
		cout << "" << "на север";
	}
	if (c == 1) {
		cout << " " << "на запад";
	}
	if (c == 2) {
		cout << " " << "на юг";
	}
	if (c == 3) {
		cout << " " << "на восток";
	}
	return 0;
}
