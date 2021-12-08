class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector <int> newArr{};
    
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                newArr.push_back(i);
                
            }
        }
        
        sort(newArr.begin(),newArr.end());
        return newArr;
    }
};
