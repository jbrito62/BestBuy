#include "BestBuy1.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	double sales;
	int months;
	cout << "Best Buy sales report" << endl;
	cout << "=======================\n\n";
	cout << "Enter Store Name ==> ";
	getline(cin, name);
	BestBuy1 jared(name);
	cout << "How many months do you want to evaluate? ==> ";
	cin >> months;
	for (int x=1; x<=months; x++)
	{
		cout << "enter sales Month # " << x << " ==> ";
		cin >> sales;
		jared.AccumSales(sales);
	}
	jared.PrintSales(sales);
}