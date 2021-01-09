#include<iostream>
#include<set>
using namespace std;
int main(){
	int buy=9999;
	int sell=0,price=0,n;
	cin>>n;
	set<int> s;
	int arr[n];
	for(int i =0;i<n;i++) cin>>arr[i];
	
	for(int i=0;i<n;i++){
		cout<<"----------------Arr:"<<arr[i]<<"------------------"<<endl;
		if(arr[i]<buy){
			buy=arr[i];
			sell=0;
			cout<<"BUY1:"<<buy<<endl;
		}
		else{
			if (arr[i]>sell ){
				sell=arr[i];
				cout<<"Sell1:"<<sell<<endl;
				price=max(price,sell-buy);
				
				cout<<"Price1:"<<price<<endl;
				continue; 
			}
			if(arr[i]<sell){
				buy=arr[i];
				cout<<"BUY2:"<<buy<<endl;
				sell=0;
				s.insert(price);
				price=0;
			}
			
			
		}	
		
	}
	s.insert(price);
	for(set<int>::iterator itr=s.begin();itr!=s.end();++itr){
		cout<<*itr<<endl;
	}

}
