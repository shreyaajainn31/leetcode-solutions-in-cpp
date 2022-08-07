class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        map<int,int> map; 
        
        int majority = nums.size()/2;
        
        for(int num: nums){
            map[num]++;
        }
        
        
        for(auto it = map.begin(); it!=map.end(); it++){
            if(it->second > majority){
                return it->first;
            }
        }
        
        return -1;
        
    }
};
