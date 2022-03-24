/*
https://leetcode.com/problems/contains-duplicate/submissions/

217. Contains Duplicate
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

Example 1:

Input: nums = [1,2,3,1]
Output: true
Example 2:

Input: nums = [1,2,3,4]
Output: false
Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true
 

Constraints:

1 <= nums.length <= 105
-109 <= nums[i] <= 109

*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        if(nums.size() <= 1){
            return false;
        }
        
        map<int,int> map;
        
        for(int num : nums){
            map[num]++;
        }
        
        for(auto it = map.begin(); it != map.end(); it++){
            if(it->second >= 2){
                return true;
            }
        }
        
        return false;
    }
};

int main(){
  Solution obj;
  vector<int> nums;
  nums.push_back(1);
  nums.push_back(2);
  nums.push_back(1);
  
  cout<<obj.containsDuplicate(nums);
}
