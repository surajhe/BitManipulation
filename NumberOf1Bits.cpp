int Solution::numSetBits(int A) {
    unsigned int count = 0;
        // while (A) {
        //     A &= (A - 1);
        //     count++;
        // }
        // return count;

        for(int i=0; i<32; i++)
        {
            if(A & (1 << i))
            {
                count++;
            }
        }

        return count;
}
