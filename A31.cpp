#include <bits/stdc++.h>

using namespace std;
int main() {
	int t;
	cin>>t;
	for(int i =0;i<t;i++){
	    int n;
	    cin>>n;
	    int arr[n];
	    for (int j =0;j<n;j++) cin>>arr[j];
	    int m;
	    cin>>m;
	    
	    sort(arr,arr+n);
	    
	    int f=0;
	    int l=m-1;
	    int mini = 99999;
	    while(l<n){
	        if(arr[l] - arr[f] < mini){
	            mini= arr[l] - arr[f];
	            
	        }
	        l++;
	        f++;
	    }
	    cout<<mini<<endl;
	    
	}
	return 0;
}

