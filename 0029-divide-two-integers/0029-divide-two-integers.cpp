class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN & divisor == 1) {
            return INT_MIN;
        }
        if (dividend == INT_MAX & divisor == -1) {
            return -INT_MAX;
        }
        if (dividend == INT_MIN & divisor ==-1  ) {
            return INT_MAX;
        }
        if (dividend == INT_MAX & divisor == 1) {
            return INT_MAX;

        }
        if (dividend == divisor){
            return 1;
        }
        int flag =0;
        if (dividend < 0 | divisor <0) {
            flag =1;

        }
        if ( dividend <0 & divisor <0){
            flag =0;
        }
        long long dvd = llabs(dividend);
        long long dvs = llabs(divisor);
        long long ans =0; 
            while (dvd >=dvs)
                {
                    long long count =0;
                    while (dvd >= (dvs << (count + 1)))
                    {
                        count++;
                    }
                dvd = dvd - (dvs << count);
                ans = ans + (1 << count);
                }
                if (flag ==1){
                    return -ans;
                }
            return ans ;
        }
        
    

};