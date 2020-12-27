// #include <iostream>
// using namespace std;

// int main ()
// {
//     int n,m;
//     int last_child = 0;
//     int max_rat = -1;
//     double ratio;
//     cin >> n >> m;

//     int arr[n];

//     for (int i=0; i<n; i++){
//         cin >> arr[i];
//     }

//     for (int i=0 ; i < n; i++){
//         if(arr[i] > m){
//             ratio = arr[i]/m + arr[i]%m;

//             if(ratio >= max_rat && i> (last_child -1) ){
//                 max_rat = ratio;
//                 last_child = i + 1;
//             }
//         }
//     }
    
//     if (last_child==0)
//         last_child = sizeof(arr)/4;
    
//     cout << last_child;
//     return 0;
// }

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, m, last;
    double t, max(0);
    cout << max;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        if (ceil(t / m) >= max)
        {
            last = i;
            max = ceil(t / m);
        }
    }

    cout << last << endl;
    return 0;
}