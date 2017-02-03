/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 31, 2017, 12:15 PM
  Purpose:  program that write a function that accepts as arguments the number of shares, the purchase
price per share, the purchase commission paid, the sale price per share, and the
sale commission paid. The function should return the profit (or loss) from the
sale of stock.
 */

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
float stockProfitLoss(int, float, float, float, float);

int main()
{
	int   NumOfShares;
	float ProfitLoss,
		   PurchPrice,
		   PurchComm,
		   SalePrice,
		   SaleComm;

	cout << "\nCaculate the profit (or loss) from the sale of stock.\n"
		 << "What is the number of shares? ";
	cin  >> NumOfShares;
	cout << "What is the purchase price per share? ";
	cin  >> PurchPrice;
	cout << "What is the purchase commission paid? ";
	cin  >> PurchComm;
	cout << "What is the sale price per share? ";
	cin  >> SalePrice;
	cout << "What is the sale commission paid? ";
	cin  >> SaleComm;

	ProfitLoss = stockProfitLoss(NumOfShares, PurchPrice, PurchComm, SalePrice,
								 SaleComm);

	cout << "The profit / loss from the sale of stock is $";
	cout << fixed << showpoint << setprecision(2);
	cout << ProfitLoss << endl << endl;

	return 0;
}

/*******************************************************************************
 *                            stockProfitLoss                                  * 
 * This function accepts as arguments the number of shares, the purchase price *
 * per, share teh purchase commission paid, the sale price per share, and the  *
 * sale commission paid. Calculates and returns teh profit (or loss) from the  *
 * sale of stock.                                                              * 
 *******************************************************************************/
float stockProfitLoss(int NumOfShares, float PurchPrice, float PurchComm,
	                   float SalePrice, float SaleComm)
{
	return ((NumOfShares * SalePrice) - SaleComm) - ((NumOfShares * PurchPrice)
		    + PurchComm);
}