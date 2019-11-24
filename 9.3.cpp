#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int N;
	cin >> N;
	if (N / 10 > 0)
	{
		switch (N / 10)
		{
		case 1:
			cout << "десять";
			break;
		case 2:
			cout << "двадцать";
			break;
		case 3:
			cout << "тридцать";
			break;
		case 4:
			cout << "сорок";
		}
	}
	if (N > 20 || N < 10)
	{
		switch (N % 10)
		{
		case 1:
			cout << " одно";
			break;
		case 2:
			cout << " два";
			break;
		case 3:
			cout << " три";
			break;
		case 4:
			cout << " четыре";
			break;
		case 5:
			cout << " пять";
			break;
		case 6:
			cout << " шесть";
			break;
		case 7:
			cout << " семь";
			break;
		case 8:
			cout << " восемь";
			break;
		case 9:
		cout << " девять";
			break;
		}
	}
	if (N < 20 || N>10)
	{
		switch (N)
		{
		case 11:
			cout << "одиннадцать";
			break;
		case 12:
			cout << "двенадцать";
			break;
		case 13:
			cout << "тринадцать";
			break;
		case 14:
			cout << "четырнадцать";
			break;
		case 15:
			cout << "пятнадцать";
			break;
		case 16:
			cout << "шестнадцать";
			break;
		case 17:
			cout << "семнадцать";
			break;
		case 18:
			cout << "восемнадцать";

			break;
		case 19:
			cout << "девятнадцать";
			break;
		}
	}
	if (N % 10 == 1 && N != 11)
		cout << " учебное задание";
	else if (N == 2 || N == 3 || N == 4)
		cout << " учебных задания";
	else
		cout << " учебных заданий";
	return 0;
}