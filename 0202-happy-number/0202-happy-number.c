int sos(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum = sum + digit * digit;
        n = n / 10;
    }
    return sum;
}

bool isHappy(int n) {
    int i = n;
    int j = sos(n);

    while (j != 1 && i != j) {
        i = sos(i);
        j = sos(sos(j));
    }

    return j == 1;
}
