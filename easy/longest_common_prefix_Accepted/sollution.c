#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";

    char* prefix = malloc(201);  
    if (!prefix) return "";

    strcpy(prefix, strs[0]);

    for (int i = 1; i < strsSize; i++) {
        int j = 0;
        while (prefix[j] && strs[i][j] && prefix[j] == strs[i][j]) {
            j++;
        }
        prefix[j] = '\0'; 
        if (prefix[0] == '\0') {
            break;  
        }
    }
    return prefix;  
}

int main() {
    char *words[] = {"dog","racecar","car"};
    char *result = longestCommonPrefix(words, 3);
    printf("%s\n", result);
    free(result);
    return 0;
}

