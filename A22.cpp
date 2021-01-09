#include<iostream>
#include<map>
#include<set>
#include<utility>
#include<iterator>
using namespace std;

int main(){
	int n1;
	cin>>n1;
	int arr1[n1];
	cout<<"A1"<<endl;
	for(int i =0;i<n1;i++) cin>>arr1[i];
	set<int> s1;
	int sum=0;
	
	for(int i=0;i<n1;i++){
		sum=sum+arr1[i];
		cout<<"Sum"<<sum<<endl;
		if(sum==0 || arr1[i]==0 || s1.find(sum)!=s1.end()){
			cout<<"YES"<<endl;
			break;
		}
		s1.insert(sum);
	}
	cout<<"Set"<<endl;
	for(set<int>::iterator itr=s1.begin();itr!=s1.end();++itr){
		cout<<*itr<<endl;
	}
	
}
