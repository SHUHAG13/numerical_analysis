#include <bits/stdc++.h>
using namespace std;
#define f1(x, y, z) (17 - y + 2 * z) / 20
#define f2(x, y, z) (-18 - 3 * x + z) / 20
#define f3(x, y, z) (25 - 2 * x + 3 * y) / 20

int main() {
    float x0 = 0, y0 = 0, z0 = 0, x1, y1, z1, e1, e2, e3, e;
    int count = 1;

    cout << "Enter tolerable error:" << endl;
    cin >> e;

   cout << "\nCount\tx\ty\tz\n";
    do {
        x1 = f1(x0, y0, z0);
        y1 = f2(x0, y0, z0);
        z1 = f3(x0, y0, z0);

      cout << count << "\t" << x1 << "\t" << y1 << "\t" << z1 << endl;

        e1 = fabs(x0 - x1);
        e2 = fabs(y0 - y1);
        e3 = fabs(z0 - z1);

        count++;
        x0 = x1;
        y0 = y1;
        z0 = z1;
    } while (e1 > e && e2 > e && e3 > e);

   cout << "\nSolution: x=" << x0 << ", y=" << y0 << " and z=" << z0 << endl;

    return 0;
}
