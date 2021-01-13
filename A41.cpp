class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int strt=-1;
        
        for(int i=0;i<m;i++){
            if(target<=matrix[i][n-1]){
                 strt = i;
                 for(int j=0;j<n;j++){
                    if(target==matrix[strt][j]){
                        return 1;
                    }
                }
            }
        }
        
        return 0;
    }
};