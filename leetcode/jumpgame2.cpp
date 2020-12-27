// min_jumps = 0
// max_val = 0

// while(i<n)
// 	if(i + a[i] >= n-1)
// 		max_in = a[i];
// 		min_jumps++;
// 		break;

// 	max_in = a[i+1]
// 	max_ind = i+1

// 	for j=i+1 j<= i + a[i] && j<n; j++ 
// 		if max_in < a[j]
// 			max-in = a[j]
// 			max_ind = j

// 	i = max_ind
// 	min_jumps ++ ;

#include <iostream>
#include <vector>
using namespace std;

int minJ = 0, maxV = 0, maxInd = 0;
// vector<int> a = {2, 0, 2, 0, 2, 2, 3, 4, 1, 1, 1 };
// vector<int> a = {1,1,4,1,1,2,1,1,0};
// vector<int> a = {1, 2, 4, 5, 1, 1, 3, 1, 1, 1 };
vector<int> a = {};

int main(){

    int n = a.size();
    if(n == 1)
        return 0;

    int i =0;
    while(i<n){
        if(i + a[i] >= n-1){
            minJ++;
            break;
        }

        maxV = a[i];
        maxInd = i;
        for(int j=i;j<= i+a[i] && j<n; j++){
            if(maxV <= a[j]){
                maxV = a[j];
    			maxInd = j;
            }
        }
        if(i == maxInd)
            i = i + a[i];
        else
            i = maxInd;
        minJ++;
    }

    cout << minJ << endl;

    return minJ;
}