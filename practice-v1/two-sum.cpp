class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>map;
        vector<int>ans;
       
        for(int i = 0;i<nums.size(); i++){
            map.insert(make_pair(nums[i],i));
        }
        
        for(int i = 0; i<nums.size(); i++){
            int complement = target - nums[i];
            auto it = map.find(complement);
            if(it != map.end() && it->second != i){
                ans.push_back(i);
                ans.push_back(it->second);
                return ans;
            } 
        }
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
};
