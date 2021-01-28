#include <iostream>
#include <iomanip>

using namespace std; 

//returns price with tax
float addTax(float taxRate, float cost)
{
	float taxAmount;

	if (taxRate == 0) //if there is no tax
		return cost;

	taxAmount = (taxRate / 100) * cost; //gets the amount that is added on to the cost

	return cost + taxAmount;
};

int main(int argc, char **argv)
{ 
	float userTaxRate; 
	float userCost;
	
	cout << "Enter the tax rate and the cost of an item" << endl;
	cin >> userTaxRate; //tax rate entered as a percentage, ex. 35
	cin >> userCost; //the cost

	//outputs the cost in dollar amount
	cout << fixed << setprecision(2) << "The item will cost $" << addTax(userTaxRate, userCost) << " with tax" << endl;

	return 0;
}