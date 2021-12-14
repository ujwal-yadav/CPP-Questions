class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector <int> newArr{};
        int j;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                newArr.push_back(i);
                j=i;
            }  
        }
        
        if(newArr.empty()){
                newArr.push_back(-1);
                newArr.push_back(-1);
            }
        if(newArr.size()==1){
                newArr.push_back(j);
            }
           
        sort(newArr.begin(),newArr.end());
        
        newArr={newArr.front(),newArr.back()};
        return newArr;
    }
};
