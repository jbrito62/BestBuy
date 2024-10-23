#include "BestBuy1.h"

void BestBuy1::BestBuy(string n)
{
	this->StoreName = n;
	this->TotSales = 0;
}
void BestBuy1::AccumSales(double s)
{
	this->TotSales += s;
}

void BestBuy1::MakeMessage()
{
	if (this->TotSales > 10000)
	{
		this->Message = "Good Job!!!";
	}
	else if (this->TotSales > 5000)
	{
		this->Message = "Keep the good job!!!";
	}
	else if (this->TotSales > 1000)
	{
		this->Message = "You need to improve";
	}
    else
	{
		this->Message = "Close your store";
	}
}
string BestBuy1::getStoreName()
	{
		return this->StoreName;
	}
double BestBuy1::getTotSales()
	{
		return this->TotSales;
	}
string BestBuy1::getMessage()
	{
		return this->Message;
	}
	void BestBuy1::PrintSales(double)
	{
		this->MakeMessage();
		cout << "storename : " << this->getStoreName() << endl;
		cout << "total sales: " << this->getTotSales() << endl;
		cout << this->getMessage() << endl;
	}
