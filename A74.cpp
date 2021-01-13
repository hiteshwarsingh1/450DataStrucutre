#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
        string result="";
        string str;    
    	cin>>str;
        string nums[]={"2","22","222", 
                    "3","33","333", 
                    "4","44","444", 
                    "5","55","555", 
                    "6","66","666", 
                    "7","77","777","7777", 
                    "8","88","888", 
                    "9","99","999","9999"
                   }; 
    	for(int i=0;i<str.size();i++){
            result=result+nums[(int)str[i]-65];
        
    } 
    cout<<result;
    	return 0; 
   
	
} 