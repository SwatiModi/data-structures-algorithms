#include <iostream>

using namespace std;

int main()
{
   int n;
   cin >> n;
   int arr[n];
   
   double total = 0, my = 0;
   int temp, c= 0;
   
    for(int i=0; i<n; i++){
        cin >> arr[i];
        total = total + arr[i];
    }
    
    for(int i=0;i<n;i++)
	{		
		for(int j=i+1;j<n;j++)
		{
			if(arr[i] < arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
   
    for(int i=0; i<n; i++){
        my = my + arr[i];
        c ++;
        if(my > (total/2)){
            cout << c << endl;
            break;
        }
    }
    
   return 0;
}
