/*

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

*/
class Solution {
public:
    static bool compareByFrequency(const pair<int,int>&a, const pair<int,int>&b){
        return a.second > b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map<int,int> map;
        
        for(int num: nums){
            map[num]++;
        }
        
        vector<pair<int,int>> vec;
        
        for(auto it = map.begin(); it!=map.end(); it++){
            vec.push_back(make_pair(it->first, it->second));
        }
        
        sort(vec.begin(), vec.end(), compareByFrequency);
        
        vector<int>ans;
        
        for(int it = 0; it<k; it++){
            ans.push_back(vec[it].first);
        }
        
        return ans;
    }
};
int main(){
  Solution obj;
  vector<int>nums = {1,1,1,2,2,3};
  cout<<obj.compareByFrequency(nums, 2);
}
