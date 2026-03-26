char* convertToTitle(int columnNumber) {
    int n = columnNumber;
    int remainder = 0;
    char* letter = (char*)malloc(sizeof(char) * 100);
    int i = 0;
    while (n != 0) {
        n = n - 1;
        remainder = n % 26;
        letter[i] = 'A' + remainder;
        n = n / 26;
        i++;
    }
    
    letter[i] = '\0';

    
    int left = 0;
    int right = i - 1;
    while (left < right) {
        char temp = letter[left];
        letter[left] = letter[right];
        letter[right] = temp;
        left++;
        right--;
    }


return letter;
}