long reverseBits(long n) {
    // Write your code here.
    long res=0;
    for(int i=0;i<32;i++){
        if(n&(1<<i)){
            res += (long)1<<(31-i);
        }
    }
    return res;

}