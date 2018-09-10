#include <iostream>
#include <string>
using namespace std;

int main()
{
	string user;
	int taco, burrito, queso, chips, water;
	double tacoT, burritoT, quesoT, chipsT, waterT, totalTax, total;

	//Visual Taco truck
	cout << "**********************" << endl;
	cout << "*   *******           *" << endl;
	cout << "*   *     *     ****   *" << endl;
	cout << "*   *     *     *  *    *" << endl;
	cout << "*   *     *     *  *    *" << endl;
	cout << "*               *  *    *" << endl;
	cout << "*************************" << endl;
	cout << "   *   *           *   *    " << endl;
	cout << "     *               *     " << endl;
	//Getting customer name
	cout << "Can I get a name for the order?" << endl;
	cin >> user;
	//Ordering tacos
	cout << "How many tacos do you want? 1.00 per taco" << endl;
	cin >> taco;
	//Ordering burritos
	cout << "How many burritos do you want? 1.50 per burrito" << endl;
	cin >> burrito;
	//Ordering Queso
	cout << "How many orders of queso do you want? 1.00 per order" << endl;
	cin >> queso;
	//Ordering chips
	cout << "How many orders of chips do you want? .75 per order" << endl;
	cin >> chips;
	//Ordering water
	cout << "How many glasses of water do you want? .25 per glass" << endl;
	cin >> water;

	//Getting a total amount for food.
	tacoT = taco * 1.00;
	burritoT = burrito * 1.50;
	quesoT = queso * 1.00;
	chipsT = chips * .75;
	waterT = water * .25;

	//End total for whole order
	total = tacoT + burritoT + quesoT + chipsT + waterT;
	totalTax = total + (total * .07);

	cout << "Hello " << user << " your order is ready. I have " << taco << " tacos, " << burrito << " burritos, " << queso << " orders of queso, " << chips << " orders of chips, " << water << " glasses of water. Your total is $" << totalTax << endl;

	system("pause");
	return 0;
}