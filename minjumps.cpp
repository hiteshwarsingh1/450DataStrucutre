#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int pos=0;
    int count=0;
    do{
        pos=arr[pos]+pos;
        count++;
        cout<<"P:"<<pos;
    }
    while(pos<n-1);
    cout<<"\ncount"<<count;
}
