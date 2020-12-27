#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5+10;
int a[maxn];

bool cmp(const int& a,const int& b) {
	return b<a;
}

int main(void){
	int n;cin>>n;
	for(int i = 0;i < n;i++) cin>>a[i];
	sort(a,a+n,cmp);
	int ans = 0;
	
	for(int i = 0;i < n;i++){
		int sum = a[i] + a[n-1];
		if(sum <= 4) //If the maximum plus minimum is less than 4, the number of cars is +1, and the team is reduced by 2;
		{
			ans++;
			n--;
			while(sum + a[n-1] <= 4)
			{
				n--;
				 sum+=a[n-1]; //If you still have seats, continue to add the minimum. If it is less than 4, the team will lose 1 and the number of cars will remain the same.
			}	
		}
		 else ans++; //If the maximum plus minimum is greater than 1, the number of cars is +1, the team-1 (the left side of the array minus 1 minus this, this is equivalent to i++). 
	}	
	cout<<ans;
	return 0;
}

