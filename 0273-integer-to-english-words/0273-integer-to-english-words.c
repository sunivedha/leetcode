#include <strings.h>
char* nameof3grouped(int num) {
    // we need to divide the number into three parts
    char* ones[] = {"",    "One",     "Two",       "Three",    "Four",
                    "Five",    "Six",     "Seven",     "Eight",    "Nine",
                    "Ten",     "Eleven",  "Twelve",    "Thirteen", "Fourteen",
                    "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    char* tens[] = {"",      "Ten",   "Twenty",  "Thirty", "Forty",
                    "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    char* ans = (char*)malloc(100 * sizeof(char));
    ans[0] = '\0';

    if (num >= 100) {
        strcat(ans, ones[num / 100]);
        strcat(ans, " Hundred ");
        num %= 100;
    }

    if (num >= 20) {
        strcat(ans, tens[num / 10]);
        strcat(ans, " ");
        num %= 10;
    }

    if (num >0) {
        strcat(ans, ones[num]);
        strcat(ans, " ");
    }
    return ans;
}
char* numberToWords(int num) {
    if (num == 0)
        return "Zero";

    char* units[] = {"", "Thousand", "Million", "Billion"};
    char* result = (char*)malloc(1000);
    result[0] = '\0';
    int i = 0;
    while (num > 0) {
        int k = num % 1000;
        if (k != 0) {
            char* part = nameof3grouped(k);
            char temp[1000];
            strcpy(temp, part);
            if (strlen(units[i]) > 0) {
                strcat(temp, units[i]);
                strcat(temp, " ");
            }
            strcat(temp, result);
            strcpy(result, temp);
        }
        num /= 1000;
        i++;
    }
        int len = strlen(result);
        if (len > 0 && result[len - 1] == ' ')
            result[len - 1] = '\0';

        return result;
    }
