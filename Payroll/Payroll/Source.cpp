#include <iostream>
using namespace std;

int main()
{
	double weekGross, next, nfw = .20, ficaN, fica = .08, stateN, state = .04, total;

	cout << "Please input weekly gross pay." << endl;
	cin >> weekGross;
	next = nfw * weekGross;
	ficaN = fica * weekGross;
	stateN = state * weekGross;
	total = weekGross - next - ficaN - stateN;

	cout << "The weekly pay after taxes is $" << total << "." << endl;

	system("pause");
	return 0;
}