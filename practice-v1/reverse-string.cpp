class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int size = s.size();
        int i = size -1;
        int j = 0;
        while(i >= size/2){
            char temp = s[j];
            s[j] = s[i];
            s[i]= temp;
            i--;
            j++;
        }
    }
};
