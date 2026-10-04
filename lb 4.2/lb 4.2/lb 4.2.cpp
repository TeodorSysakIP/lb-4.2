#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x, xp, xk, dx, F, y;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;

    x = xp;
    while (x <= xk)
    {
        // значення виразу у фігурній дужці залежить від проміжку, якому належить x
        if (x < -1)
            F = sin(x) * sin(x) / (1 + fabs(cos(x)));
        else if (x <= 1)
            F = cos(1 / fabs(x + 2)) * cos(1 / fabs(x + 2));
        else
            F = log(fabs(x + 2));

        y = 2 * fabs(x - 5) - F;

        cout << "|" << setw(7) << setprecision(2) << x << " |"
            << setw(10) << setprecision(3) << y << " |" << endl;

        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}