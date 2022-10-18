#include <bits/stdc++.h>
using namespace std;
//ADAPTIVE BUBBLE SORT

void bubble_sort(int arr[])
{
    bool isswapped = 1;

    for (int i = 0; i < 8 - 1; i++)
    {
        isswapped = 0;

        for (int j = 0; j < 8 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isswapped = 1;
            }
        }
        if (isswapped == 0)
        {
            break;
        }
    }
}

int main()
{
    int arr[8] = {29, 3, 52, 27, 19, 54, 63, 87};
    bubble_sort(arr);
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}