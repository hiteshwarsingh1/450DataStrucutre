class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector <int> result;
        int k=0,l=0,m=c,n=r;
        while(k<m && l<n){
            for(int i=k;i<m;i++){
                result.push_back(matrix[l][i]);
            }
            l++;
            for(int i=l;i<n;i++){
                result.push_back(matrix[i][m-1]);
            }
            m--;
            if(l<n){
                for(int i=m-1;i>k-1;i--){
                    result.push_back(matrix[n-1][i]);
                }
                n--;
            }
            if(k<m){
                for(int i=n-1;i>l-1;i--){
                result.push_back(matrix[i][k]);
                }
                k++;
                
            }
            
        }
        return result;
    }
};