class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;
        for(int i = 0; i<numRows; i++){
            int ans = 0;
            vector<int> row;
            for(int j = 0; j<=i; j++){
                if(j == 0 || j == i){
                    row.push_back(1);
                }else{
                    ans = pascal[i-1][j-1] + pascal[i-1][j];
                    row.push_back(ans);
                }
            }
            pascal.push_back(row);
        }     
        return pascal;
    }
};