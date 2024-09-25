#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, a, b, c, F;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(8) << "F" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x < 0 && b != 0)
			F = a * (x * x) + b;
		if (x > 0 && b == 0)
			F = (x - a) / (x - c);
		if (!(x < 0 && b != 0) && !(x > 0 && b == 0))
			F = x / c;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(8) << setprecision(3) << F
			<< " |" << endl; 

		
		x += dx;
	}
	cout << "---------------------------" << endl;
	cin.get();
	return 0;
}