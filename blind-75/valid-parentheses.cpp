/*
20. Valid Parentheses
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
 
Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.

https://leetcode.com/problems/valid-parentheses/
*/
class Solution {
public:
    bool isOpen(char c){
        return c == '(' || c == '[' || c == '{';
    }
    bool isValid(string s) {
        
        stack<char>stack;
        
        for(char c : s){
            if(isOpen(c)){
                stack.push(c);
            }
            else{
                if(stack.empty()){
                    return false;
                }
                
                else if(c == ')'){
                    if(stack.top() == '('){
                        stack.pop();
                    }
                    else{
                        return false;
                    }
                }
                else if(c == ']'){
                    if(stack.top() == '['){
                        stack.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    if(stack.top() == '{'){
                        stack.pop();
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        
        return stack.empty();
    }
};

int main(){
  Solution obj;
  cout<<obj.isValid("(())");

}
