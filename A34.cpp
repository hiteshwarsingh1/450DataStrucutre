#include <iostream>
using namespace std;

int main() {
    int tc;
    cin>>tc;
    for(int i =0;i<tc ;i++){
        int n;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++) cin>>a[j];
        
        int k;
        cin>>k;
        
        int count=0;
        for(int j=0;j<n;j++){
            if (a[j]<=k){
                count++;
            }
        }
        int bad=0;
        for(int j=0;j<count;j++){
            if (a[j]>k){
                bad++;
            }
        }
        int ans=bad;
        
        for(int j=0,d=count;d<n;++d,++j){
            if(d==n){
                break;
            }
            if(a[j]>k){
                --bad;
            }
            if(a[d]>k){
                ++bad;
            }
           
            ans=min(bad,ans);
        }
        cout<<ans<<endl;
        
    }
	return 0;
}