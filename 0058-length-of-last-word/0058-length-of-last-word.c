int lengthOfLastWord(char* s) {
    int l = 0;
    while (s[l] != '\0') {
        l++;
    }
    while (l > 0 && s[l - 1] == ' ') {
        l--;
    }
    int ans = 0;
    while(l>0&&s[l-1]!=' '){
        ans++;
        l--;
    }
    return ans;
}