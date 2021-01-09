int PalinArray(int a[], int n)
{  
    for(int i=0;i<n;i++){
        int num = a[i];
        int rev=0;
        while(num!=0){
            rev = rev*10 + num%10;
            num = num/10;
        }
        if(rev!=a[i]){
            return 0;
        }
        
    }
    return 1;
}