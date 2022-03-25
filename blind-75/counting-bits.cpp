/*
338. Counting Bits
Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.
Example 1:

Input: n = 2
Output: [0,1,1]
Explanation:
0 --> 0
1 --> 1
2 --> 10
Example 2:

Input: n = 5
Output: [0,1,1,2,1,2]
Explanation:
0 --> 0
1 --> 1
2 --> 10
3 --> 11
4 --> 100
5 --> 101
 

Constraints:

0 <= n <= 105
 

Follow up:

It is very easy to come up with a solution with a runtime of O(n log n). Can you do it in linear time O(n) and possibly in a single pass?
Can you do it without using any built-in function (i.e., like __builtin_popcount in C++)?
https://leetcode.com/problems/counting-bits/
*/

class Solution {
public:
    //int count = 0;
    int countOnes(int n){
        int count = 0;
        
        while(n > 0){
            int dig = n % 2;
            n = n / 2;
            if(dig == 1){
                count++;
            }
        }
        
        return count;
        
    }
    vector<int> countBits(int n) {
       
        vector<int> count;
        count.push_back(0);
        if(n == 0){
            return count;
        }
        
        for(int i = 1; i<=n; i++){
            count.push_back(countOnes(i));
        }
             
        return count;
    }
};

int main(){
   Solution obj;
   vector<int> ans = obj.countBits(5);
   for(int num : ans){
      cout<<num<<" ";
   }
}
