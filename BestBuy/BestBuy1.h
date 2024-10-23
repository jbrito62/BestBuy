#include <iostream>
using namespace std;
class BestBuy1
{
private:
	string StoreName;
	double TotSales;
	string Message;
	void MakeMessage();

public:
	void BestBuy(string);
	void AccumSales(double);
	void PrintSales(double);
	double getTotSales();
	string getStoreName();
	string getMessage();
};

