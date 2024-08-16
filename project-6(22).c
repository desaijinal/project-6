#include <stdio.h>
#include <string.h>

#define ASCII_SIZE 256 

void countCharacterFrequency(const char *str) {
    int freq[ASCII_SIZE] = {0};  


    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];  // Cast to unsigned char to ensure it's in the 0-255 range
        freq[ch]++;
    }

   
    printf("Character frequencies:\n");
    for (int i = 0; i < ASCII_SIZE; i++) {
        if (freq[i] > 0) {
            printf("'%c' : %d\n", i, freq[i]);
        }
    }
}

int main() {
    char str[1000];  

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    countCharacterFrequency(str);

    return 0;
}
