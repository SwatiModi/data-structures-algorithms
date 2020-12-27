#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {11, 12, 13, 14, 15, 16};

    for (int i = 0; i < 6; i++)
        cout << arr[i] << " ";

    cout << "By Other Method:" << endl;
    for (int i = 0; i < 6; i++){
        cout << i[arr] << " ";
        cout << i << " \n";
    }

    return 0;
}
