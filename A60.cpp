#include<bits/stdc++.h>
#include<string.h>
#include<vector>
int main(){
    string str1 = "XY";
    string str2 = "12";
    string str3 = "1XY2";
    string str4 = "Y12X";

    int i=0,j=0;
    for(int k=0;k<str3.size();k++){
        if(str3[k]==str1[i]){
            i++;
        }
        else if(str3[k]==str2[j]){
            j++;
        }
        else
        {
            return 0;
        }
        
    }
    return 1;

}