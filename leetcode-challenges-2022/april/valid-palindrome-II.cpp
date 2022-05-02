/*
680. Valid Palindrome II
Given a string s, return true if the s can be palindrome after deleting at most one character from it.
Example 1:

Input: s = "aba"
Output: true
Example 2:

Input: s = "abca"
Output: true
Explanation: You could delete the character 'c'.
Example 3:

Input: s = "abc"
Output: false
https://leetcode.com/problems/valid-palindrome-ii/
 
Constraints:

1 <= s.length <= 105
s consists of lowercase English letters.

*/

class Solution {
public:
    
    bool isPalindrome(string s, int i, int j){
        
        while(i <= j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        
        return true;
    }
    bool validPalindrome(string s) {
        
        int i = 0, j = s.length()-1;
        
        while(i<=j && s[i] == s[j]){
                i++;
                j--;
        }

        return i>j || isPalindrome(s, i+1, j) || isPalindrome(s,i, j-1);
        
    }
};

int main(){
  Solution obj;
  cout<<obj.validPalindrome("abc");
}
