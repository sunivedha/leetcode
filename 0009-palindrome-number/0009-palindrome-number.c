bool isPalindrome(int x) {
    if(x<0){
        return false;
    }
    int og = x;
    int rem;
    long int rev =0;
    while(x!=0){
        rem = x%10;
        rev = rev*10+rem;
        x = x/10;
    }
    if(og==rev){
        return true;
    }
    else{
        return false;
    }
}