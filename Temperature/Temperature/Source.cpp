#include <iostream>
#include <string>
using namespace std;

int main()
{
	int one, two, three, four, five, six;
	// Getting nums
	cout << "Please enter temperature at 8 A.M." << endl;
	cin >> one;
	cout << "Please enter temperature at 12 P.M." << endl;
	cin >> two;
	cout << "Please enter temperature at 5 P.M." << endl;
	cin >> three;
	// Math
	four = (one - 32) * .5556;
	five = (two - 32) * .5556;
	six = (three - 32) * .5556;
	// If statement that would display an error.
	if (two - one > 10 || one > two || three - two > 10)
	{
		cout << "Please input correct data." << endl;
	}
	else 
	{
		// Output
		cout << "The tempearture at 8 A.M. was " << one << "F or " << four << "C." << endl;
		cout << "The tempearture at 12 P.M. was " << two << "F or " << five << "C." << endl;
		cout << "The tempearture at 5 P.M. was " << three << "F or " << six << "C." << endl;
	}


	system("pause");
	return 0;
}