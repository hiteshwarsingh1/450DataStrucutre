#include<iostream>
using namespace std;



int main(){
	int n;
	cout<<"Size:"<<endl;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cout<<"\nA["<<i<<"]:";
		
		cin>>arr[i];	
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<",";
	}
	int last=n-1;
	
	while(arr[last]<arr[last-1]){
		last--;
		if(last==1){
		break;
	}
	}
	last--;
	if(last==0){
		cout<<"Done";
	}
	cout<<"\n"<<last<<"-"<<arr[last];
	int fr=last+1;
	while(arr[fr]<arr[last]){
		fr++;
	}
	fr=fr+1;
	cout<<"\n"<<fr<<"-"<<arr[fr];
	cout<<"\n"<<last<<"-"<<arr[last];
	int temp=arr[fr];
	arr[fr]=arr[last];
	arr[last]=temp;
	
	
	
	cout<<"\nArray: ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<",";
	}
	int s=last+1;
	int e=n-1;
	int mid=(s+e)/2;
	for(int i=s;i<mid;i++){
		int temp=arr[i];
		arr[i]=arr[e];
		arr[e]=temp;
	
		e--;
	}
	
	cout<<"\nArray: ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<",";
	}
	
}
