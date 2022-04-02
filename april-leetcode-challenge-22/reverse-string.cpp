/*
344. Reverse String
Write a function that reverses a string. The input string is given as an array of characters s.
You must do this by modifying the input array in-place with O(1) extra memory.
Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]

Constraints:
1 <= s.length <= 105
s[i] is a printable ascii character.
https://leetcode.com/problems/reverse-string/

*/

class Solution {
public:
    
    void swap(vector<char>&s, int i, int j){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    
    void reverseString(vector<char>& s) {
        
        int i = 0, j = s.size()-1;
        
        while(i < j){
            swap(s, i, j);
            i++;
            j--;
        }
        
    }
};

int main(){
  Solution obj;
  vector<char> s = {"h","e","l","l","o"};
  obj.reverseString(s);
  for(char c : s){
    cout<<c;
  }
}
