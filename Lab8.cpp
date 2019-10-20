#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int n, m;
	cin >> n >> m;
	cout << n << " ";
	if (m == 1)
		cout << "января";
	if (m == 2)
			cout << "февраля";
	if (m == 3)
		cout << "марта";
	if (m == 4)
		cout << "апреля";
	if (m == 5)
		cout << "мая";
	if (m == 6)
		cout << "июня";
	if (m == 7)
		cout << "июля";
	if (m == 8)
		cout << "августа";
	if (m == 9)
		cout << "сентября";
	if (m == 10)
		cout << "октября";
	if (m == 11)
		cout << "ноября";
	if (m == 12)
		cout << "декабря";
	return 0;
} 

