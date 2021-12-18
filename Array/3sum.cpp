
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long n=nums.size();
        vector<vector<int>>neww;
        
        for(int i=0;i<n-2;i++){
            if(i==0 || (i>0 && nums[i]!=nums[i-1])){
            int target,sum,lo,hi;
            target=0-nums[i];
            lo=i+1;
            hi=n-1;
            
            while(lo<hi){
                sum=nums[lo]+nums[hi];
                if(sum>target){
                    hi--;
                }
                else if(sum<target){
                    lo++;
                }
                else{
                    vector<int> t;
                    t.push_back(nums[i]);
                    t.push_back(nums[lo]);
                    t.push_back(nums[hi]);
                    neww.push_back(t);
                    
                    while(lo<hi && nums[lo]==nums[lo+1]) lo++;
                    while(lo<hi && nums[hi]==nums[hi-1]) hi--;
                    
                    lo++;
                    hi--;
                    }
                } 
            }
        }
    return neww;
    }
};
