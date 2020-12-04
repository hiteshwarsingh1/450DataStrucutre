#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Size:"<<endl;
	cin>>n;
	int arr[n][2];
	
	for(int i=0;i<n;i++){
		cout<<"\nA[0]"<<"["<<i<<"]:";
		cin>>arr[i][0];
		cout<<"\nA[1]"<<"["<<i<<"]:";
		cin>>arr[i][1];
		
	}
	cout<<"[";
	for(int i=0;i<n;i++){
		cout<<"["<<arr[i][0]<<","<<arr[i][1]<<"]";
	}
	cout<<"]";
	for(int i=0;i<n;i++){
		cout<<"\n Run";
		
		if(arr[i][1]>=arr[i+1][0]){
			int j=i+1;
			int count=0;
			while( (arr[i][1]<arr[j][1] || arr[i][1]>arr[j][1]) && arr[i][1]>=arr[j+1][0]){
				j++;
				count++;
			}
			int str=arr[i][0];
			int end;
			if (arr[i][1]<arr[j][0]){
				end=arr[i][1];
				cout<<"h1";
				
			}
			else{
				end=arr[j][1];
				cout<<"h2"<<arr[j][1];
				
			}
			cout<<"\nPair:("<<arr[i][0]<<","<<end<<")";
			cout<<"\nCount"<<count;
			
			if(j==n-1){
				break;
			}
		}
	}
	
}
