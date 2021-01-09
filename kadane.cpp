#include<iostream>
using namespace std;
int main(){
	int meh=0;
	int msf=INT_MIN;
	int n;
	cout<<"Size"<<endl;
	cin>>n;
	
	int arr[n];
	int str,end;
	cout<<"Array Enter"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for (int i=0;i<n;i++){
		meh=meh+arr[i];
		if(meh<arr[i]){
			str=i;
			meh=arr[i];

		}
		if (msf<meh){
			msf=meh;
			end=i;
		}
		
	}
	cout<<"MAX:"<<msf<<endl;
	
	for(int i=str;i<end+1;i++){
		cout<<arr[i]<<"\t";
	}
	
}
