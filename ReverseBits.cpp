unsigned int Solution::reverse(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<int> V;
    int base = 1, dec = 0;
    for(int i=0; i<32; i++)
    {
        if(A & (1 << i))
        {
            V.push_back(1);
        }
        else
        {
            V.push_back(0);
        }
    }

    for(int i=31; i>=0; i--)
    {
        if(V[i] == 1)
        {
            dec = dec + base;
        }

        base = base * 2;
    }

    return dec;

}
