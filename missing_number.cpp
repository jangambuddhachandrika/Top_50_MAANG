class Solution {
public:
    int missingNumber1(vector<int>& nums) {
        
        int n = nums.size();
        int Tsum = (n*(n+1))/2;
        return  Tsum - accumulate(nums.begin(),nums.end(),0);
        
    }
 int missingNumber2(vector<int>& nums) {
        int res = nums.size();
        for(int i=0; i<nums.size(); i++){
            res ^= i;
            res ^= nums[i];
        }
        return res;
        
    }
};
