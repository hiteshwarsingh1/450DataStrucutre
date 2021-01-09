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
	int count=1;
	int pre_count=1;
	int pre_n;
	int curr_n;
	for(int i=0;i<n1;i++){
		s1.insert(arr1[i]);
	}
	set<int>::iterator itr=s1.begin();
	pre_n=*itr;
	++itr;
	cout<<"Bla"<<endl;
	
	for(;itr!=s1.end();++itr){
		cout<<*itr<<"ITR....."<<"Pre"<<pre_n<<endl;
		
		if(*itr==pre_n+1){
			count++;
			pre_n=*itr;
		}
		else{
		
			pre_count=max(count,pre_count);
			curr_n=*itr;
			count=1;
			pre_n=*itr;
		}
		
	}
	pre_count=max(count,pre_count);
	cout<<"Count"<<pre_count<<endl;
	cout<<"Set"<<endl;
	for(set<int>::iterator itr=s1.begin();itr!=s1.end();++itr){
		cout<<*itr<<endl;
	}
	cout<<"Curr"<<curr_n;
}
