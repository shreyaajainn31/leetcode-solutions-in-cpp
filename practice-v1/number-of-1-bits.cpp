class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n > 0){
            int dig = n % 2;
            count = dig == 1 ? count + 1 : count;
            n = n /2;
        }
        
        return count;
    }
};
