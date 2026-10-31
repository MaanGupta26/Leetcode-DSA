class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {

        int shift =0;
        while (right > left) {
            right &= (right -1);

        }
        return right;
    }
};