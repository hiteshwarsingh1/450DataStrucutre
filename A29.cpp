#include<bits/stdc++.h>
using namespace std;
bool triplesum(int arr, int N, int X){
	sort(arr,arr+N);
    for(int l=0;l<N-2;l++){
        int i=l;
        int j=N-1;
        int s=X-arr[l];
        while(i<j){
            if (arr[i]+arr[j]<s){
                i++;
            }
            else if (arr[i]+arr[j]>s){
                j--;
            }
            else{
                return true;
            }
        }
    }
    return false;
}
int main (){
	int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
	int N= 10;
	int X= 14;
	return triplesum(arr,N,X);
}
