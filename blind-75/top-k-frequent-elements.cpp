/*
Medium

7722

337

Add to List

Share
Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

 

Example 1:

Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]
Example 2:

Input: nums = [1], k = 1
Output: [1]
 

Constraints:

1 <= nums.length <= 105
k is in the range [1, the number of unique elements in the array].
It is guaranteed that the answer is unique.
 
Follow up: Your algorithm's time complexity must be better than O(n log n), where n is the array's size.
https://leetcode.com/problems/top-k-frequent-elements/
*/

typedef pair<int,int> p;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int> ans;
        
        if(nums.size() == 0){
            return ans;
        }
        
        map<int,int> map;
        
        for(int num : nums){
            map[num]++;
        }
        
        vector<p> vec;
    
        for(auto it = map.begin(); it != map.end(); it++){
            vec.push_back(make_pair(it->first, it->second));    
        }
  
        sort(vec.begin(), vec.end(),[](const p&a, const p&b){
            return a.second >= b.second;
        });
        
        for(int i = 0; i<k; i++){
            ans.push_back(vec[i].first);
        }
        
        
        return ans;
    }
};

int main(){
  Solution obj;
  vector<int> nums;
  nums.push_back(1);
  vector<int>ans = obj.topKFrequent(nums,1);
  for(int num:ans){
    cout<<num<<" ";
  }

}
