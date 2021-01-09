
#include <bits/stdc++.h>
using namespace std;

int main()

{	int n=10;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		cout<<&arr[i]<<endl;
	}
	return 0;
}

