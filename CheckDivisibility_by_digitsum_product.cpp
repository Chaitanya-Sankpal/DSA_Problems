class Solution {
public:
    bool checkDivisibility(int n) {

       int num = n;
        int sumd = 0, product = 1;

        while(n > 0){
            int rem = n % 10;
            sumd += rem;
            product *= rem;
            n /= 10;
        }

        long long total = sumd + product;

        return num % total == 0;

        
    }
};