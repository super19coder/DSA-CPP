#include <iostream>
using namespace std;
#define max 30
int r = -1, f = -1, q[max];
void enqueue(int x)
{
    if (r = max - 1)
    {
        cout << "overflow conditon" << endl;
    }
    else
    {
        if (f == -1)
        {
            r++, f++;
        }
        else
        {
            r++;
            q[r] = x;
        }
    }
}
void dequeue()
{
    if (f == -1)
    {
        cout << "undeflow condition" << endl;
    }
    else
    {
        if (f <= r)
        {
            f++;
        }
        else
        {
            cout << "underflow conditon" << endl;
        }
    }
}
void display()
{
    for (int i = f; i <= r; i++)
    {
        cout << q[i] << " ";
    }
}
int main()
{
    int n, x;

    cout << "type 1:enqueue 2:dequeue 3:display" << endl;
    cin >> n;
    cout << "element you want to put queue" << endl;

    return 0;
}