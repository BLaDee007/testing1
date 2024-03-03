#include <iostream>
using namespace std;

void cocktailSort(int arr[], int n);

int main()
{
    int arr[] = {25, 64, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cocktailSort(arr, n);

    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

void cocktailSort(int arr[], int n)
{
    bool swapped = true;
    int start = 0;
    int end = n - 1;

    while (swapped)
    {
        // Forward pass (left to right)
        swapped = false;
        for (int i = start; i < end; i++)
        {
            if (arr[i] < arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }

        if (!swapped)
        {
            break; // If no swapping occurred, the array is already sorted.
        }

        --end; // Update the end position

        // Backward pass (right to left)
        swapped = false;
        for (int i = end - 1; i >= start; i--)
        {
            if (arr[i] < arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }

        ++start; // Update the start position
    }
}
