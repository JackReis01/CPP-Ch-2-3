#include <iostream>
using namespace std;

int main()
{
	int userEgg, dozen, singular;
	double dozenMon, singularMon, cost;
	cout << "One dozen eggs costs $2.00 and one singular egg costs 0.25 cents. How many eggs do you want?" << endl;
	// Math for dozen of eggs
	cin >> userEgg;
	dozen = userEgg / 12;
	singular = userEgg % 12;
	if (dozen <= 10)
	{
		// Price for dozen of eggs less than 10
		dozenMon = dozen * 2.00;
		singularMon = singular * 0.25;
	}
	if (dozen > 10)
	{
		// Price for dozen of eggs less than 10
		dozenMon = dozen * 1.50;
		singularMon = singular * 0.25;
	}
	cost = dozenMon + singularMon;
	cout << "You have " << dozen << " dozen eggs and " << singular << " singluar egg(s). The cost is $" << cost << endl;

	system("pause");
	return 0;
}