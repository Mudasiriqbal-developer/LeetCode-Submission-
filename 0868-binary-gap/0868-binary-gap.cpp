class Solution {
public:
    int binaryGap(int n) {
        string binary = "";

        while(n > 0) {
            binary = char((n % 2) + '0') + binary;
            n /= 2;
        }

        int countOne = 0;
        for(char c: binary) {
            if(c == '1') countOne++;
        }

        if(countOne <= 1) return 0;

        int currZeroCount = 0;
        int maxGap = 0;

        for(char bit: binary) {
            if(bit == '0') {
                currZeroCount++;
            } else {
                maxGap = max(maxGap, currZeroCount + 1);
                currZeroCount = 0;
            }
        }

        return maxGap;
    }
};