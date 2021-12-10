#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

#define z 1

#define INPUT(x) cin >> x
#define PRINT(str) cout << (str)
#define ENDL cout << endl

#define SQUARE(x) ((x)*(x))
#define ABS(x) (((x) < 0) ? -(x) : (x))
#define QUBE(x) ((x)*(x)*(x))

#define MIN(x, y) (((x)<(y))?(x):(y))
#define MAX(x, y) (((x)>(y))?(x):(y))

int main()
{
    double x, y, w;
    PRINT("x = "); INPUT(x);
    PRINT("y = "); INPUT(y);
    PRINT("z = "); PRINT(z); ENDL;

#if (z>1&&z<3)
    w = MAX(ABS(x) + ABS(y) + ABS(z), QUBE(x));
#elif z<3
    w = MIN(2 * x + y, SQUARE(2 * y - z));
#endif
    PRINT("w = "); PRINT(w); ENDL;
}