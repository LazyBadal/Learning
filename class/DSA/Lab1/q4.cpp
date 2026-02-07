#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char word[50];
    int i = 0, j = 0;

    printf("Enter a sentence:\n");
    gets(sentence);  

    printf("\nPalindrome words are:\n");

    for (i = 0; ; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            word[j] = '\0';

            int len = strlen(word);
            int flag = 1;

            for (int k = 0; k < len / 2; k++) {
                if (word[k] != word[len - k - 1]) {
                    flag = 0;
                    break;
                }
            }

            if (flag && len > 1) {
                printf("%s\n", word);
            }

            j = 0;
            if (sentence[i] == '\0')
                break;
        } else {
            word[j++] = sentence[i];
        }
    }

    return 0;
}
