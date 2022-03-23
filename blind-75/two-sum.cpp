/*

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
Link: https://leetcode.com/problems/two-sum/

*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        
        map<int, int> map;
        
        for(int i = 0; i<nums.size(); i++){
            map.insert(pair<int,int>(nums[i], i));
        }
        
        for(int i = 0; i<nums.size(); i++){
            
            int complement = target - nums[i];
            
            if(map.count(complement) != 0){
                auto it = map.find(complement);
                if(it->second != i){
                    ans.push_back(i);
                    ans.push_back(it->second);
                    break;
                }
            }
        }
        
        if(ans.empty()){
            ans.push_back(-1);
            ans.push_back(-1);
        }
        
        return ans;
        
    }
};

int main(){
   vector<int> nums;
   nums.push_back(3);
   nums.push_back(3);
   vector<int> ans = twoSum(nums, 6);
   for(int num : ans){
      cout<<num<<" ";
   }
  
}
