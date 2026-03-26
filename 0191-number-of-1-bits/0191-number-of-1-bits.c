int hammingWeight(int n) {
    int set_bit = 0;
    while(n!=0){
        if(n%2==1){
            set_bit++;
        }
        n=n/2;
    }
    return set_bit;
}