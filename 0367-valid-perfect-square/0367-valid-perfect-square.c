bool isPerfectSquare(int num) {
    if(num==0||num==1){
        return true;
    }
    int i = 1;
    int ans = 0;
    while(i<=num/i){
        if(i*i==num){
            ans = 1;
            break;
        }
        else{
            i++;
        }
    }
    if(ans==1){
        return true;
    }
    else{
        return false;
    }
}