#include<iostream>
using namespace std;
int main(){
	
	int size1,size2;
	cin>>size1;
	cin>>size2;
	int arr1[size1],arr2[size2];
	cout<<"Array 1"<<endl;
	for(int i=0;i<size1;i++){
		cin>>arr1[i];
		
	}
	cout<<"Array 2"<<endl;
	for(int i=0;i<size2;i++){
		cin>>arr2[i];
		
	}
	cout<<"Action"<<endl;
	int max;
	if(size1>size2){
		max=size1;
	}
	else{
		max=size2;
	}
	int i=0,j=0;//if remove comment it will be union else intersection
	while(arr1[i] && arr2[j]){
		if(arr1[i]<arr2[j]){
			//cout<<arr1[i];
			i++;
		}
		else if(arr1[i]>arr2[j]){
			//cout<<arr2[j]<<"\t";
			j++;
		}
		else{
			cout<<arr1[i]<<"\t";
			i++;
			j++;
		}
	}
	
	for(int k=i;k<size1;k++){
		//cout<<arr1[k];
	}
	for(int k=j;k<size2;k++){
		//cout<<arr2[k];
	}
	
	
}
