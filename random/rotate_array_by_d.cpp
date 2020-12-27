//Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements.
// https://www.geeksforgeeks.org/array-rotation/

// using temp array
#include <iostream>

using namespace std;
int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int d = 4;
int n = sizeof(arr) / sizeof(arr[0]);

int main()
{
    int temp[d];

    for (int i = 0; i < d; i++)
        temp[i] = arr[i];

    for (int i = 0; i < n - d; i++)
        arr[i] = arr[i + d];

    for (int i = 0; i < d; i++)
        arr[i + n - d] = temp[i];

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
// Time complexity : O(n)
// Auxiliary Space : O(d)

// Using temp variable
#include <iostream>

using namespace std;
int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int d = 4;
int temp, n = sizeof(arr) / sizeof(arr[0]);

void rotateLeftByOne(int arr[], int n)
{
    temp = arr[0];
    int i;
    for (i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
    arr[i] = temp;
}

int main()
{
    for (int i = 0; i < d; i++)
        rotateLeftByOne(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

// Time complexity : O(n * d)
// Auxiliary Space : O(1)

// One more method - juggling
// Time complexity : O(n)
// Auxiliary Space : O(1)