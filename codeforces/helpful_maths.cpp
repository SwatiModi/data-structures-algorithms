#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{   
    string str;
    cin >> str;
    int str_length = str.length()/2 + 1;

    int arr[str_length] = { 0 }; 
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) { 
        int num=0;
        if (str[i] == '+')
            continue;
        else{
            arr[j] = (int) str[i] - 48;
            j++;
        }
    }
    
    sort(arr, arr+str_length); 
    
    for(int i=0; i<str_length-1; i++){
        cout << arr[i]  << "+";
    }
    cout << arr[str_length-1] ;
}


