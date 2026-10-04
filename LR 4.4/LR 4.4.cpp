// LR 4.4.cpp
// Кіц Роман Романович
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком.
// Варіант 12

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double R, x, xp, xk, dx, y;

    do {
        cout << "R (0 < R < 6) = "; cin >> R;
    } while (R <= 0 || R >= 6);
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << "     |"
        << setw(7) << "y" << "       |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (x < -6)
            y = R;
        else
            if (x <= -R)
                y = (x + R) / (6 - R);
            else
                if (x <= 0)
                    y = R - sqrt(fmax(0., R * R - (x + R) * (x + R)));
                else
                    if (x <= R)
                        y = sqrt(fmax(0., R * R - x * x));
                    else
                        y = R - x;

        cout << "|" << setw(7) << setprecision(2) << x
            << "    |" << setw(10) << setprecision(3) << y
            << "     |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}
