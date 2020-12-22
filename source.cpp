#include <bits/stdc++.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Rus");
	int num=0;
	cout << "Ââåäèòå êàêîå êîëè÷åñòâî ðîìáîâ âû õîòèòå óâèäåòü íà ýêðàíå: ";
	cin >> num;
	int tmp=num;
	while(num>0)
	{
		cout << "  *  ";
		num--;
	}
	cout << "\n";
	num=tmp;
	while(num>0)
	{
		cout << " *** ";
		num--;
	}
	cout << "\n";
	num=tmp;
	while(num>0)
	{
		cout << "*****";
		num--;
	}
	cout << "\n";
	num=tmp;
	while(num>0)
	{
		cout << " *** ";
		num--;
	}
	cout << "\n";
	num=tmp;
	while (num>0)
	{
		cout << "  *  ";
		num--;
	}
}