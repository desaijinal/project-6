#include <stdio.h>

#define MAX_LENGTH 100

int getStringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int isPalindrome(char str[]) {
    int start = 0;
    int end = getStringLength(str) - 1;
    
    while (start < end) {
        if (str[start] != str[end]) {
            return 0; 
        }
        start++;
        end--;
    }
    return 1; 
}

int main() {
    char str[MAX_LENGTH];
    
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    
    int length = getStringLength(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }

    
    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
