#include<iostream>
using namespace std;
void arrange(int* arr,int* size){
	int pt=0;
	for(int i=0;i<*size;i++){
		if(arr[i]<0){
			int temp=arr[i];
			arr[i]=arr[pt];
			arr[pt]=temp;
			pt++;
		}
	}                                              
}
int main(){
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
		
	}
	arrange(arr,&size);
	for(int i=0;i<size;i++){
		cout<<arr[i];
	}
}
