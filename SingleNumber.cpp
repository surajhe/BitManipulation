Given an array of integers, every element appears thrice except for one, which occurs once.

Find that element that does not appear thrice.

  
int Solution::singleNumber(const vector<int> &A) {

     int n = A.size();
        int count[32] = {0};
        int result = 0;
        for (int i = 0; i < 32; i++) {
            for (int j = 0; j < n; j++) {
                //if ((A[j] >> i) & 1) 
                if (A[j] & (1 << i))
                {
                    count[i]++;
                }
            }
            result |= ((count[i] % 3) << i);
        }
        return result;
}
