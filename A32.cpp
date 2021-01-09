#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={43,201,51,121,190,29};
    int x=394;

    int s=0;
    int e=0;
    int ml=7;
    int sum=0;


    while(s<6 and e<=6 and s<=e){
        
        cout<<"--------------"<<endl;
        cout<<"Sum1 : "<<sum<<endl;
        if(sum>x){
            ml=min(ml,e-s);
            cout<<"ML : "<<ml<<endl;
            cout<<"e : "<<e<<" s : "<<s<<endl;
            sum=sum-a[s];
            s++;
            cout<<"Sum2 : "<<sum<<endl;
        }
        else
        {
            sum=sum+a[e];
            e++;
        }
        

    }
    cout<<"Min Lenght : "<<ml;

}