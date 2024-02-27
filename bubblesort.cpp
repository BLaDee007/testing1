#include <iostream>
#include <vector>

using namespace std;

// Bubble Sort Algorithm
void bubbleSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                // swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Binary Search Algorithm (Iterative)
int binarySearch(const vector<int> &arr, int target)
{
    int left = 0;
    int right = arr.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; // If element not found
}

int main()
{
    // Bubble Sort
    vector<int> array = {64, 34, 25, 12, 22, 11, 90};
    cout << "Array before sorting: ";
    for (int num : array)
    {
        cout << num << " ";
    }
    cout << endl;

    bubbleSort(array);

    cout << "Array after sorting: ";
    for (int num : array)
    {
        cout << num << " ";
    }
    cout << endl;

    // Binary Search
    int target = 34;
    int index = binarySearch(array, target);
    if (index != -1)
        cout << "Element " << target << " found at index " << index << endl;
    else
        cout << "Element " << target << " not found in the array." << endl;

    return 0;
}