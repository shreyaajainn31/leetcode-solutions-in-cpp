class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length()<=1){
            return true;
        }
        
        string t="";
        
        for(char c: s){
            if(isalpha(c) || isdigit(c)){
                t+=tolower(c);
            }
        }
        
        int i = 0, j = t.length()-1;
        if(t.length()<=1){
            return true;
        }
        
        while(i < t.length() && j>=0 && t[i] == t[j]){
            
            if(j == i){
                return true;
            }
            
            if(j < i){
                break;
            }
            i++;
            j--;
            
        }
        
        return i-1 == j;
    }
};
