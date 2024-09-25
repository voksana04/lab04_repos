#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R, i;
	cout << "R = "; cin >> R;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		
		if ((y >= 0 && y <= x && (x * x + y * y) <= R * R) || (y <= 0 && y >= -x && (x * x + y * y) <= R * R))

			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

		for (int i = 0; i < 10; i++)
		{
			x = -R + static_cast<double>(rand()) / RAND_MAX * 2 * R;
			y = -R + static_cast<double>(rand()) / RAND_MAX * 2 * R;
			if ((y >= 0 && y <= x && (x * x + y * y) <= R * R) || (y <= 0 && y >= -x && (x * x + y * y) <= R * R))
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	return 0;
}