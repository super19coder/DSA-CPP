// stack with local variable

#include <iostream>
using namespace std;
#define max 50
int push(int n[], int x)
{
    if (x == max - 1)
    {
        // stack is full
        cout << "overflow" << endl;
    }
    else
    {
        x++;
        cout << "element for push" << endl;
        cin >> n[x];
    }
    return x;
}
int pop(int x)
{
    if (x == -1)
    {
        // underflow
        cout << "underflow" << endl;
    }
    else
    {
        x--;
    }
    return x;
}
void display(int n[], int x)
{
    for (int i = x; i >= 0; i--)
    {
        cout << n[i] << endl;
    }
}
int main()
{
    int top = -1, stk[max];
    top = push(stk, top);
    top = push(stk, top);
    top = pop(top);
    top = push(stk, top);
    display(stk, top);

    return 0;
}