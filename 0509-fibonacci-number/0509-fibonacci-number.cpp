class Solution {
public:
    int memFib(int n, vector<int> &arr){
        if(arr[n]==-1){
            if(n<=1)    return n;
            else {
                int result = memFib(n-1,arr) + memFib(n-2,arr);
                arr[n] = result;
            }
        }
        return arr[n];
    }
    int fib(int n) {
        vector<int> arr(n+1,-1);
        return memFib(n,arr);
    }
};