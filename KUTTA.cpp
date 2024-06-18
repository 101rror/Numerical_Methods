#include <bits/stdc++.h>

using namespace std;

#define f(x, y)  (x * y)


double second()
{
    double x, y, x0, y0, h, k1, k2;

    printf("Enter x0 : ");
    cin >> x0;
    printf("Enter y0 : ");
    cin >> y0;

    printf("Enter Calculation Point x : ");
    cin >> x;

    //h = (xn - x0) / n; initial n numbers output

    printf("Enter h : ");
    cin >> h;


    cout << "X\t\tY\t\tK1\t\tK2\t\tYn + 1\n";
    cout << "----------------------------------------------------------------------------------------------------------------\n";


    while((x - x0) > 0.0000000001)
    {
        k1 = h * (f(x0, y0));
        k2 = h * (f(x0 + (h / 2.0), y0 + (k1 / 2.0)));
        y = y0 + k2;

        cout << fixed << setprecision(10) << x0 << "\t" << y0 << "\t" << k1 << "\t" << k2 << "\t" << y << endl;
        y0 = y;
        x0 += h;
    }

    cout << fixed << setprecision(10) << x0 << "\t" << y0 << endl;
    cout << "----------------------------------------------------------------------------------------------------------------\n";

    printf("\nValue of Y = ");
    cout << y << endl;
}


double fourth()
{
    double x0, y0, yn, x, h, k, k1, k2, k3, k4, t;

    printf("Enter x0 : ");
    cin >> x0;
    printf("Enter y0 : ");
    cin >> y0;

    printf("Enter Calculation Point x : ");
    cin >> x;

    //h = (xn - x0) / n; initial n numbers output

    printf("Enter h : ");
    cin >> h;

    cout << "X\t\tY\t\tK1\t\tK2\t\tK3\t\tK4\t\tYn + 1\n";
    cout << "----------------------------------------------------------------------------------------------------------------\n";

    while((x - x0) > 0.0000000001)
    {
        k1 = h * (f(x0, y0));
        k2 = h * (f((x0 + (h / 2.0)), (y0 + (k1 / 2.0))));
        k3 = h * (f((x0 + (h / 2.0)), (y0 + (k2 / 2.0))));
        k4 = h * (f((x0 + h), (y0 + k3)));

        cout << fixed << setprecision(10) << x0 << "\t" << y0 << "\t" << k1 << "\t" << k2 << "\t" << k3 << "\t" << k4 << "\t" << (1/6.0*(k1+2*k2+2*k3+k4)) << endl;

        k = y0 + (1/6.0*(k1+2*k2+2*k3+k4));
        y0 = k;

        x0 = x0 + h;
    }

    cout << fixed << setprecision(10) << x0 << "\t" << y0 << endl;
    cout << "----------------------------------------------------------------------------------------------------------------\n";

    printf("\nValue of Y at X = ");
    cout << x;
    printf(" is ");
    cout << fixed << setprecision(10) << y0 << endl;
}



int main()
{
    printf("Please choices order 2 or 4.\n");
    printf("Enter Order Number : ");
    char op;
    cin >> op;

    switch(op)
    {
    case '2':
        second();
        break;
    case '4':
        fourth();
        break;

    default:
        cout << "Error! Order is not correct. Cz' KUTTA method only have 2 orders!\n";
    }

    return 0;
}
