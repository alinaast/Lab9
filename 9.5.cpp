#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int N;
	cin >> N;
	N = N % 60;
	switch (N / 12)
	{
	case 0:
		cout << "год зелен";
		break;
	case 1:
		cout << "год красн";
		break;
	case 2:
		cout << "год желт";
		break;
	case 3:
		cout << "год бел";
		break;
	case 4:
		cout << "год черн";
		break;
	}
	switch (N % 12)
	{
	case 4:
	cout << "ой крысы";
		break;
	case 5:
		cout << "ой коровы";
		break;
	case 6:
		cout << "ого тигра";
		break;
	case 7:
		cout << "ого зайца";
		break;
	case 8:
		cout << "ого дракона";
		break;
	case 9:
		cout << "ой змеи";
		break;
	case 10:
		cout << "ой лошади";
		break;
	case 11:
	cout << "ой овцы";
		break;
	case 0:
		cout << "ой обезьяны";
		break;
	case 1:
		cout << "ой курицы";
		break;
	case 2:
		cout << "ой собаки";
		break;
	case 3:
		cout << "ой свиньи";
		break;
	}
	return 0;
}
