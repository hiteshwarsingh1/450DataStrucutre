#include<iostream>
#include<map>
#include<set>
#include<utility>
#include<iterator>
using namespace std;

int main(){
	
	int arr[]={1,4,8,10};
	int k=7;
	map<int,int> mp;
	for(int i=0;i<4;i++){
		
		if(mp.find(arr[i])==mp.end()){
			mp.insert(pair<int,int>(arr[i],1));
			
		}
		else{
			map<int,int>::iterator itr=mp.find(arr[i]);
			itr->second=itr->second+1;
		}
		
	}
	for(map<int,int>::iterator itr=mp.begin();itr!=mp.end();++itr){
		cout<<itr->first<<":"<<itr->second<<endl;
	}
	int count=0;
	int count_sm=0;
	for(map<int,int>::iterator itr=mp.begin();itr!=mp.end();++itr){
		int tbf=k-itr->first;
		if(mp.find(tbf)==mp.end()){
			continue;
		}
		else{
			map<int,int>::iterator tbf_itr=mp.find(tbf);
			if(tbf!=itr->first){
				count = count + ((itr->second)*(tbf_itr->second));
				cout<<"Diff COunt"<<count<<endl;
			}

			else{
				cout<<"Same"<<endl;
				int n=itr->second;
				count_sm = count_sm + ((n-1)*n)/2;
			}
		}
	}
	cout<<"Count:"<<((count)/2)+count_sm<<endl;
	
}
