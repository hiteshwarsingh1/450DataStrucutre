#include<iostream>
#include<map>
#include<set>
#include<utility>
#include<iterator>
using namespace std;

int main(){
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	int arr1[n1],arr2[n2],arr3[n3];
	cout<<"A1"<<endl;
	for(int i =0;i<n1;i++) cin>>arr1[i];
	cout<<"A2"<<endl;
	for(int i =0;i<n2;i++) cin>>arr2[i];
	cout<<"A3"<<endl;
	for(int i =0;i<n3;i++) cin>>arr3[i];
	
	set<int> s1,s2,s3;
	
	for(int i=0;i<n1;i++){
		
			s1.insert(arr1[i]);
		
	}
	for(int i=0;i<n2;i++){
		if(s1.find(arr2[i])==s1.end()){
			s1.insert(arr2[i]);
		}
		else{
			s2.insert(arr2[i]);
		}
	}
	
	for(int i=0;i<n3;i++){
		if(s2.find(arr3[i])==s2.end()){
			s1.insert(arr3[i]);
		}
		else{
			s3.insert(arr3[i]);
		}
	}
	cout<<"Common"<<endl;
	for(set<int>::iterator itr=s3.begin();itr!=s3.end();++itr){
		cout<<*itr<<endl;
	}
	cout<<"Union"<<endl;
	for(set<int>::iterator itr=s1.begin();itr!=s1.end();++itr){
		cout<<*itr<<endl;
	}
}
