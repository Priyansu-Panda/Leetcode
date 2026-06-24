class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int t) {
        int m = mat.size(), n = mat[0].size();
        int l = 0, h = (m*n)-1, mid = 0;
        int i = 0, j = 0;
        while(l<=h){
            mid = (l+h)/2;
            i = mid/n;
            j = mid%n;
            if(mat[i][j]==t){
                return true;
            }else if(mat[i][j]<t){
                l=mid+1;
            }else{
                h=mid-1;
            }
        }
        return false;
    }
};