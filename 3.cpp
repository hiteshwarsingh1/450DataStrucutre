#include<iostream>
using namespace std;
void selection_sort(int* arr,int* size){
	int i,j;
	for(i=0;i<*size;i++){
		
		for(j=i;j<*size;j++){
			
			if (arr[j]<arr[i]){
				
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	

}

int main(){
	int size,k;
	
	cout<<"Enter Size"<<endl;//size of array
	cin>>size;
	cout<<"Enter K value"<<endl;//size of array
	cin>>k;
	int arr[size];
	
	cout<<"Enter array elements"<<endl;
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	cout<<"Array:"<<endl;
	for(int i=0;i<size;i++){
		cout<<arr[i]<<"\t";
	}
	;
	selection_sort(arr,&size);
	cout<<"Sorted Array:"<<endl;
	
	for(int i=0;i<size;i++){
		cout<<arr[i]<<"\t";
	}
	
	cout<<"\nMax:"<<arr[k]<<"\t Min:"<<arr[size-k];
	
	
}
