#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	double bagels = .99, donuts = .75, coffee = 1.20, bagelTot, donutTot, coffeeTot, total;
	int bagelInt, donutInt, coffeeInt;
	cout << "What is the name for the order?" << endl;
	cin >> name;
	cout << "How many bagels do you want?" << endl;
	cin >> bagelInt;
	cout << "How many donuts do you want?" << endl;
	cin >> donutInt;
	cout << "How many cups of coffee do you want?" << endl;
	cin >> coffee;

	bagelTot = bagels * bagelInt;
	donutTot = donuts * donutInt;
	coffeeTot = coffee * coffeeInt;
	total = bagelTot + donutTot + coffeeTot;

	cout << "Hello " << name << ", You ordered " << bagelInt << " bagels, " << donutInt << " donuts, and " << coffeeInt << " cups of coffee. Your total is $" << total << endl;

	system("pause");
	return 0;
}