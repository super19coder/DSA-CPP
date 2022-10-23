#include <iostream>
using namespace std;
int main()
{
    int arr[] = {72, 33, 56, 92, 9, 41, 10}, n = 7;
    int frr[10] = {0};

    for (int i = 0; i < n; i++)
    {
        while (arr[i])
        {
            int mode = arr[i] % 10;
            frr[mode]++;
            arr[i] = arr[i] / 10;
        }
    }
    for (int j = 0; j < 10; j++)
    {
        cout << frr[j] << endl;
    }
    for (int j = 9; j >= 0; j--)
    {
        while (frr[j]--) // frr[j]=frr[j]-1
        {
            cout << j;
        }
    }

    return 0;
}