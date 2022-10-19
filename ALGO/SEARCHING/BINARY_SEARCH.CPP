#include <iostream>
using namespace std;

void insertion(int arr[10])
{
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
}

void sort(int arr[])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (arr[i] >= arr[j])

                swap(arr[i], arr[j]);
        }
    }

    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << endl;
    }
}

void search(int arr[], int key)
{
    int low;
    int high;
    int mid;
    mid = (low + high) / 2;
    while (arr[mid] != key)
    {
        if (arr[mid] < key)
        {
            low = mid + 1;
            mid = (low + high) / 2;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
            mid = (low + high) / 2;
        }
    }
    cout << mid << endl;
}

int main()
{
    int arr[10];
    insertion(arr);

    sort(arr);

    search(arr, 5);
    return 0;
}