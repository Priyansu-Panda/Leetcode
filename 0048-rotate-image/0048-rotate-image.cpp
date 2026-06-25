class Solution {
public:
    void rev(vector<int> &mat){
        int l = 0, h = mat.size()-1, temp=0;
        while(l<=h){
            temp = mat[l];
            mat[l] = mat[h];
            mat[h] = temp;

            l++; h--;
        }
        return;
    }
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();  //  4 X 4

        for(int i = 0; i<=n-2; i++){    // 0 -- 2  
            for(int j = i+1; j<n; j++){ // 1 -- 3
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i = 0; i<n; i++){
            rev(matrix[i]);
        }
        return;
    }
};