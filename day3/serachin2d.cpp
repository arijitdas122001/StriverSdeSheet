class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int row=n-1,col=0;
       while(row>=0 && col<m){
           if(matrix[row][col]>target){
               row--;
           }
           else if(matrix[row][col]<target){
               col++;
           }else{
               return true;
           }
       }
        return false;
    }
};