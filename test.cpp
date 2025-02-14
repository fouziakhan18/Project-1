#include <bits/stdc++.h>
using namespace std;

// Linear Search Function
int search(int array[], int n, int x)
{
    // Going through array sequentially
    for (int i = 0; i < n; i++)
    {
        if (array[i] == x)
        {
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if element is not found
}

int main()
{
    int n, x;

    // Taking input for the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int array[n];

    // Taking input for the elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    // Taking input for the element to search
    cout << "Enter the element to search: ";
    cin >> x;

    // Function call to perform linear search
    int result = search(array, n, x);

    // Output the result
    if (result != -1)
    {
        cout << "Element found at index: " << result << endl;
    }
    else
    {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}
