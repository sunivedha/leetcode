int addDigits(int num) {
    int digit;
    int i = 0;
    if (num == 0) {
        return 0;
    }
    while (num >= 10) {
        int ans = 0;
        while (num > 0) {
            digit = num % 10;
            ans = ans + digit;
            num = num / 10;
        }
        num = ans;
    }
    return num;
}