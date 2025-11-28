//Q115: Check if two strings are anagrams
#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    int count_s[26] = {0}, count_t[26] = {0};
    int i, is_anagram = 1;
    
    printf("Enter first string: ");
    scanf("%s", s);
    
    printf("Enter second string: ");
    scanf("%s", t);
    
    printf("String s: %s\n", s);
    printf("String t: %s\n", t);
    
    int len_s = strlen(s);
    int len_t = strlen(t);
    
    if (len_s != len_t) {
        printf("Not Anagram\n");
        return 0;
    }
    
    // Count frequency of each character
    for (i = 0; i < len_s; i++) {
        count_s[s[i] - 'a']++;
        count_t[t[i] - 'a']++;
    }
    
    // Compare frequencies
    for (i = 0; i < 26; i++) {
        if (count_s[i] != count_t[i]) {
            is_anagram = 0;
            break;
        }
    }
    
    if (is_anagram) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }
    
    return 0;
}