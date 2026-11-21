
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];

    int vowels = 0;
    int consonants = 0;
    int digits = 0;
    int spaces = 0;

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {

        char ch = tolower(str[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u') {
            vowels++;
        }
        else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        }
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        else if (ch == ' ') {
            spaces++;
        }
    }

    printf("%d %d %d %d\n",
           vowels, consonants, digits, spaces);

    return 0;
}
