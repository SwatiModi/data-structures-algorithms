#include <bits/stdc++.h>
using namespace std;

void printPascal(int n)
{
    vector<vector<int>> arr(n, vector<int>(n));

    for (int l = 0; l < n; l++)
    {
        for (int i = 0; i <= l; i++)
        {
            if (l == i || i == 0)
                arr[l][i] = 1;
            else
                arr[l][i] = arr[l - 1][i - 1] + arr[l - 1][i];
            cout << arr[l][i] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int n = 5;
    printPascal(n);
    return 0;
}
