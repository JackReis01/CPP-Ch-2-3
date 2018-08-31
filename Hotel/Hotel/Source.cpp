#include <iostream>
#include <string>
using namespace std;

int main()
{
	int Days;
	string name;
	double roomCharge = 120.0, internet = 9.99, totalBill = 0.0;
	cout << "What is your name?" << endl;
	cin >> name;
	cout << "How many days do you want to stay?" << endl;
	cin >> Days;

	totalBill = (roomCharge * Days) + internet;

	if (Days > 1)
	{
		cout << "Hello " << name << " You stayed " << Days << " days. Your total charge is $" << totalBill << endl;
	}
	else
	{
		cout << "Hello " << name << " You stayed " << Days << " day. Your total charge is $" << totalBill << endl;
	}
	system("pause");
	return 0;
}