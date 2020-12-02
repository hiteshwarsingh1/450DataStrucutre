#include<iostream>
using namespace std;
int main(){
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	int temp=arr[0];
	for(int i=1;i<size;i++){
		arr[i-1]=arr[i];
	}
	arr[size-1]=temp;
	for(int i=0;i<size;i++){
		cout<<arr[i];
	}
	
}
