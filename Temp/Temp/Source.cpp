#include <iostream>
#include <string>
using namespace std;

double math(double fahren)
{
	double r;
	r = (fahren - 32) * 5 / 9;
	return r;
}


int main()
{
	double one, two, three, z;
	// Getting nums
	cout << "Please enter temperature at 8 A.M." << endl;
	cin >> one;
	cout << "Please enter temperature at 12 P.M." << endl;
	cin >> two;
	cout << "Please enter temperature at 5 P.M." << endl;
	cin >> three;
	// If statement that would display an error.
	if (two - one > 10 || one > two || three - two > 10)
	{
		cout << "Please input correct data." << endl;
	}
	else
	{
		z = math(one);
		cout << "The tempearture at 8 A.M. was " << one << "F or " << z << "C." << endl;
		z = math(two);
		cout << "The tempearture at 8 A.M. was " << two << "F or " << z << "C." << endl;
		z = math(three);
		cout << "The tempearture at 8 A.M. was " << three << "F or " << z << "C." << endl;
		// Output
	}


	system("pause");
	return 0;
}
