#include <iostream>

using namespace std;

int main()
{   
    int n;
    cin >> n;
    int a[n];
    
    for(int i=0; i<n; i++)
        cin >> a[i];
    
    int min=a[0], max=a[0], minx=0, maxx=0;
    
    for(int i=0; i<n; i++){
       if(a[i] <= min){
            min = a[i];
            minx = i;
       }
       
       if(a[i] > max){
            max = a[i];
            maxx = i;
       }
    }
    
    
    if(maxx>minx)
	    cout<<(maxx-1)+(n-minx)-1;
    else
	    cout<<(maxx-1)+(n-minx);
    
    // int temp;
    // temp = a[0];
    // a[0] = a[maxx];
    // a[maxx] = temp;
    
    // temp = a[n-1];
    // a[n-1] = a[minx];
    // a[minx] = temp;
    
   
    // for(int i=0; i<n; i++)
    //     cout << a[i] << " ";
        
   return 0;
}
