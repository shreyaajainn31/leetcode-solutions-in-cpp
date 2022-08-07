class Solution {
public:
    int strStr(string haystack, string needle) {
        
        for(int i = 0; i<haystack.length(); i++){
            if(haystack[i] == needle[0]){
                int j = i;
                int k = 0;
                
                while(haystack[j] == needle[k] && j < haystack.length() && k <needle.length()){
                           j++;
                           k++;
                }
                if(k >= needle.length()){
                    return i;
                }
            }
        }
        
        return -1;
        
    }
};
