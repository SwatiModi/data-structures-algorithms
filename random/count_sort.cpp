# include <bits/stdc++.h>

using namespace std;

int A[101], X, n; // I supposed that we have numbers from 0-100
int maximum;
int main ()
{
    cin>>n; // number of elements
    for (int i=1; i<=n; ++i) {
        cin>>X; // a new number
        ++A[X]; // increasing the appearance array

        maximum=max(maximum, X);
    }

    for (int i=0; i<=maximum; ++i) {
        if (A[i]>0) {
            for (int j=1; j<=A[i]; ++j)
                cout<<i<<" ";
        }
    }

    return 0;
}
