#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	double amount, bonus, totalChe, monthTot, percent;
	cout << "What is your name?" << endl;
	cin >> name;
	cout << "What percent of your checks do you deposit? (Decimal format)" << endl;
	cin >> percent;
	cout << "How much money do you receive in a paycheck?" << endl;
	cin >> amount;
	cout << "How much did you deposit of your bonus?" << endl;
	cin >> bonus;
	totalChe = amount * percent;
	monthTot = (totalChe * 24) + bonus;

	cout << "Hello " << name << ". You deposited a total of $" << monthTot << endl;


	system("pause");
	return 0;
}