#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[])
{
    for (int i = 0; i < sizeof(arr) - 1; i++)
    {
        for (int j = 0; j < sizeof(arr) - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main()
{
    int arr[5] = {99, 34, 32, 12, 1};
    bubble_sort(arr);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}