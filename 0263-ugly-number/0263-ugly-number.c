bool isUgly(int n) {
    /*Non-ugly number means its factors gotta be 2, 3 , 5 only, so dividing all
    the 2, 3, and 5 should make the number as 1 - nothing remaining, if it is
    some other number, then it is ugly*/
    if (n<=0){;
        return false;
    }
    while (n % 2 == 0) {
        n = n / 2;
    }
    while (n % 3 == 0) {
        n = n / 3;
    }
    while (n % 5 == 0) {
        n = n / 5;
    }
    return n == 1;
}