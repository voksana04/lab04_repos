#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, y, xp, xk, dx, R;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "R = "; cin >> R;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(8) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x < -6 - R)
			y = 0;
		else
			if (-6 - R <= x && x < -6)
				y = -sqrt(R * R - ((x + 6) * (x + 6)));
			else
				if (-6 <= x && x < -R)
					y = (R * R + R * x) / (-R + 6);
				else
					if (-R <= x && x < 0)
						y = sqrt(R * R - x * x);
					else
						if (0 <= x && 3 > x)
							y = R + (-R * x) / 3;
						else
							if (3 <= x && 9 > x)
								y = (R * x - 3 * R) / 6;


		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(8) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}