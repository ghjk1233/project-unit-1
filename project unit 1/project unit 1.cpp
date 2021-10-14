#include <iostream>

using namespace std;

int main()
{

	float price = 3.39;
	float tax = 0.13;
	int floor;
	float totalpretax;
	float totalincludetax;
	float finalprice;
	


    cout << "How large is the floor?(in square meter)" << endl;
	cin >> floor;
	totalpretax = floor * price;
	totalincludetax = totalpretax * tax;


	float wages = 22.50;
	float hours = floor / 5;
	float totalcost = hours * wages;
	cout << "The total cost for hours is";
	cout << totalcost;
	

}


