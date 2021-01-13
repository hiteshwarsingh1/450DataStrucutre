#include <bits/stdc++.h>
#include<string>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	for(int k=0;k<tc;k++){
	    int f=0,m=0;
	    string s;
	    cin>>s;
	    stack <char> stc;
	   stc.push(s[0]);
     
	    for(int i=1;i<s.size();i++){
            
            if(stc.top()=='{' && s.at(i)=='}')
            {
                stc.pop();
                
            }
            else
            {
               
                stc.push(s[i]);
            }
	    }
        while(!stc.top()){
         
            if(stc.top()=='{')
            {
                f++;
            }
            else
            {
                m++;
            }
            stc.pop();
            
        }
       
        cout<<ceil(f/2)+1+ceil(m/2)+1;
        
	    
	    
	}
}