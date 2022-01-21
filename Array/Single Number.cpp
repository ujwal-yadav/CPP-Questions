class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int j;  
        vector<int> freq(nums.size(), 0);
        for(int i=0;i<nums.size();i++){
            freq[i]=count(nums.begin(), nums.end(),nums[i]);
            if(freq[i]==1){
                 return nums[i];
             }
        }
        return 0;
    }
};
