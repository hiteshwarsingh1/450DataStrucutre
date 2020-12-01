#include<iostream>
using namespace std;
void min_max(int* arr,int* size,int* max_ele,int* min_ele){
	
	for(int i=0;i<*size;i++){
		if (arr[i]>*max_ele){
		
			*max_ele=arr[i];
		}
		if (arr[i]<*min_ele){
			*min_ele=arr[i];
		}
	}
	

}

int main(){
	int size;
	int max_ele=INT_MIN;
	int min_ele=INT_MAX;
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
	min_max(arr,&size,&max_ele,&min_ele);
	cout<<"\nMax:"<<max_ele<<"\t Min:"<<min_ele;
	
}
