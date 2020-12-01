#include<iostream>
using namespace std;
void reverse(int* arr,int* size){
	int new_size=(*size/2);
	for(int i=0;i<new_size;i++){
		int temp=arr[i];
		arr[i]=arr[*size-1-i];
		arr[*size-1-i]=temp;
	}
}

int main(){
	int size;
	cout<<"Enter Size"<<endl;//size of array
	cin>>size;
	int arr[size];
	cout<<"Enter array elements"<<endl;
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	cout<<"Array:"<<endl;
	for(int i=0;i<size;i++){
		cout<<arr[i]<<"\t";
	}
	reverse(arr,&size);
	cout<<"\n";
	for(int i=0;i<size;i++){
		cout<<arr[i]<<"\t";
	}
}
