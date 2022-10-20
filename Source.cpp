#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main() {
	double y,x ,R, xp, xk, dx;
		cout << "xp = "; cin >> xp;
		cout << "xk = "; cin >> xk;
		cout << "dx = "; cin >> dx;
		cout << "R ="; cin >> R;
		cout << fixed;
		cout << "---------------------------" << endl;
		cout << "|" << setw(5) << "x" << " |" << setw(7) << "y" << " |" << endl;
		cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x < 0)
			y = -R / 6 - (x + 6);
		else
			if (x > 0 < x && x <= R)
				y = 0 - sqrt(pow(R, 2) - pow(x - 0, 2));
			else
				if (x > R && x <= 2 * R)
					y = 0 + sqrt(pow(R, 2) - pow(x - 2 * R, 2));
				else
					y = R;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;

}