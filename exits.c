#include "shell.h"

/**
 **_strncpy --  copies a string
 *@dest: the destination string to be copied to
 *@src: the source string
 *@n: the amount of characters to be copied
 *Return: the concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
    char *s = dest;
    int i;
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    for (; i < n; i++) {
        dest[i] = '\0';
    }
    return s;
}

/**
 **_strncat -- concatenates two strings
 *@dest: the first string
 *@src: the second string
 *@n: the amount of bytes to be maximally used
 *Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
    char *s = dest;
    while (*dest) {
        dest++;
    }
    while (n-- > 0 && *src) {
        *dest++ = *src++;
    }
    *dest = '\0';
    return s;
}

char *_strchr(char *s, char c)
{
    while (*s != '\0') {
        if (*s == c) {
            return s;
        }
        s++;
    }
    return NULL;
}
