#include<iostream>
using namespace std;

int main(){
	int arr[6];
	for(int i;i<6;i++){
		cin>>arr[i];
		
	}
	int min=9999;
	int pre=0;
	int final=0;
	int nema=0;
	int max=0;
	for(int i=0;i<6;i++){
		if(arr[i]<min){
			pre=final;
			min=arr[i];
			max=arr[i];
		}
		else{
			if(arr[i]>max){
				max=arr[i];
				nema=max-min;
				if(nema>pre){
					final=nema;
				}
				else{
					final=pre;
				}
			}
		}
	}
	cout<<final;
	
}
