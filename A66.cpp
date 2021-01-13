#include <bits/stdc++.h> 
using namespace std; 
int check(string s){
    int count_1=0,count_0=0;
    
    for(int i=0;i<s.size();i++){
        if(s.at(i) == '1'){
            count_1++;
        }
        else
        {
            count_0++;
        }
    }
    if(count_0!=count_1)
    {
        cout<<"NOT";
        return 0;
    }
    else{
        int strt=0;
        for(int i=0;i<s.size();i++){
        if(s.at(i) == '1'){
            count_1--;
        }
        else
        {
            count_0--;
        }
        if(count_0==count_1){
            cout<<"SUB:"<<s.substr(strt,i+1)<<endl;
            strt=i+1;
        }
    }
    }
return 0;
}
int main() 
{ 
        
        string str;    
    	cin>>str;
    	check(str); 
    	return 0; 
   
	
} 