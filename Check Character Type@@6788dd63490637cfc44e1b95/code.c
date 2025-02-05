#include <stdio.h>
#include <ctype.h> 
int main() {
    char c;
    c = tolower(c);

    
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        printf("Vowel");
    }
    else if ((c >= 'a' && c <= 'z')) {
        printf("Consonant");
    }
    else if (c>= '1' && c <='9'){
        printf("Digit");
    }
    else {
        printf("Special Character");
    }
    return 0;
}
