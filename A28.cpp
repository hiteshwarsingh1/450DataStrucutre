#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main(){
	int n1,n2;
	cin>>n1>>n2;
	int arr1[n1],arr2[n2];
	cout<<"A1"<<endl;
	for(int i=0;i<n1;i++) cin>>arr1[i];
	cout<<"A2"<<endl;
	for(int i=0;i<n2;i++) cin>>arr2[i];
	set<int> s;
	for(int i=0;i<n1;i++) 
	{
		s.insert(arr1[i]);
	}
	cout<<"set"<<endl;
	for(set<int>::iterator itr=s.begin();itr!=s.end();++itr)
	{
		cout<<*itr<<endl;
	}
	for(int i=0;i<n2;i++){
		if(s.find(arr2[i])!=s.end()){
			cout<<"cool"<<endl;
		}
		else{
			cout<<"not cool"<<endl;
			break;
		}
		
	}
	
	
}
