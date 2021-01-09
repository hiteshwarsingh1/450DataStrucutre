#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	int h=arr[0];
	int s=0;
	int sm=0,m=0;
	for(int i=0;i<n;i++){
		if(arr[i]>sm){
			sm=m;
			m=arr[i];
		}
	}
	cout<<sm<<" "<<m<<endl;
	for(int i=1;i<n;i++){
		if(arr[i]<h){
			s=s+(h-arr[i]);
		}
		else{
			h=arr[i];
		}
	}
	cout<<"Stroage"<<s;
}
