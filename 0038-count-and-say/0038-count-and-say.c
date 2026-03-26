char* countAndSay(int n) {
    char *curr = (char *)malloc(2 * sizeof(char));
    curr[0] = '1';
    curr[1] = '\0';

    for (int step = 1; step < n; step++) {
        char *next = (char *)malloc(5000 * sizeof(char));
        int i = 0, k = 0;

        while (curr[i] != '\0') {
            char ch = curr[i];
            int count = 0;

            while (curr[i] != '\0' && curr[i] == ch) {
                count++;
                i++;
            }

            next[k++] = count + '0';
            next[k++] = ch;
        }

        next[k] = '\0';
        free(curr);
        curr = next;
    }

    return curr;
}
