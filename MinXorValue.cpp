Given an integer array A of N integers, find the pair of integers in the array which have minimum XOR value. Report the minimum XOR value.
  
 int Solution::findMinXor(vector<int> &A) {

    sort(A.begin(), A.end());

    int n = A.size();
    int val = 0;
    int min_xor = INT_MAX;

    for(int i=0; i<n-1; i++)
    {
        val = A[i] ^ A[i+1];

        min_xor = min(min_xor, val);

    }

    return min_xor;
}
 
