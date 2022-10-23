#include <iostream>
using namespace std;

class area
{
    // int x;
    // int y;

public:
    area(int a)
    {
        cout << a * a << endl;
    }
    area(int x, int y)
    {
        cout << x * y << endl;
    }
    area(double c)
    {
        cout << 2 * 3.14 * c << endl;
    }
};
int main()
{
    area(5);
    area(12, 12);
    area(8.185);

    return 0;
}