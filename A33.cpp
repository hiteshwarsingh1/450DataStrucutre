#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,2,3,3,4};
    int r[]={1,2};

    int s=0;
    int e=4;
    int i=0;


    while(i<e){
        if (a[i]>r[1] and i<e){
            swap(a[i++],a[e]);
            e--;
        } 
        else if (a[i]<r[0]){
            swap(a[i],a[s]);
            s++;
        }
        else
        {
            i++;
        }
        

    }
    for(int k=0;k<5;k++) cout<<a[k]<<" ";

}